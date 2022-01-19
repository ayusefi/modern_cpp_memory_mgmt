#include <iostream>
#include <opencv2/opencv.hpp>
#include <png++/png.hpp>
#include <string>
#include <vector>
#include <memory>

#include "homework_8.h"
Image::Image()
{
}
Image::Image(const std::string& filename)
{
  png::image<png::rgb_pixel> image(filename);

  cols_ = image.get_width();
  rows_ = image.get_height();

  std::vector<int> red(rows_ * cols_, 0);
  std::vector<int> green(rows_ * cols_, 0);
  std::vector<int> blue(rows_ * cols_, 0);
  for (int r = 0; r < rows_; ++r)
  {
    for (int c = 0; c < cols_; ++c)
    {
      int idx = r * cols_ + c;
      red[idx] = image[r][c].red;
      green[idx] = image[r][c].green;
      blue[idx] = image[r][c].blue;
      Pixel pix = Pixel({ red[idx], green[idx], blue[idx] });
      data_.emplace_back(pix);
    }
  }
  //   data_ = { red, green, blue };
}

// bool Image::FillFromPgm(const std::string& file_name)
// {
//   igg::io_tools::ImageData image = igg::io_tools::ReadFromPgm(file_name);
//   data_ = image.data;
//   rows_ = image.rows;
//   cols_ = image.cols;
//   if (!data_.empty())
//   {
//     return true;
//   }
//   else
//   {
//     std::cerr << "[ERROR] Could not load data!\n";
//     return false;
//   }
// }

// void Image::WriteToPgm(const std::string& file_name)
// {
//   igg::io_tools::ImageData image;
//   image.data = data_;
//   image.rows = rows_;
//   image.cols = cols_;
//   bool written = igg::io_tools::WriteToPgm(image, file_name);
// }

// std::vector<float> Image::ComputeHistogram(int bins) const
// {
//   int binSize = 255 / bins;
//   std::vector<float> histogram(bins, 0);

//   // for each element of data_
//   for (int i = 0; i < data_.size(); i++)
//   {
//     // for each bin
//     for (int z = 0; z < bins; z++)
//     {
//       // check both upper and lower limits
//       if (data_[i] >= z * binSize && data_[i] < (z + 1) * binSize)
//       {
//         // increment the index that contains the point
//         histogram[z]++;
//       }
//     }
//   }
//   return histogram;
// }

void Image::DownScale(int scale)
{
  std::vector<Pixel> scaled_data(((rows_ + 1) / scale) * ((cols_ + 1) / scale));
  for (int r = 0; r < (rows_ / scale); r++)
  {
    for (int c = 0; c < (cols_ / scale); c++)
    {
      scaled_data[r * (cols_ / scale) + c] = at(r * scale, c * scale);
    }
  }
  data_.resize(((rows_ + 1) / scale) * ((cols_ + 1) / scale));
  data_ = scaled_data;
  rows_ = rows_ / scale;
  cols_ = cols_ / scale;
}

void Image::UpScale(int scale)
{
  std::vector<Pixel> scaled_data(((rows_ + 1) * scale) * ((cols_ + 1) * scale));
  for (int r = 0; r < (rows_ * scale); r++)
  {
    for (int c = 0; c < (cols_ * scale); c++)
    {
      scaled_data[r * (cols_ * scale) + c] = at(std::floor(r / scale), std::floor(c / scale));
    }
  }
  data_.resize(((rows_ + 1) * scale) * ((cols_ + 1) * scale));
  data_ = scaled_data;
  rows_ = rows_ * scale;
  cols_ = cols_ * scale;
}

bool Image::empty()
{
  return (data_.empty());
}

// getters
const int Image::rows()
{
  return rows_;
}
const int Image::cols()
{
  return cols_;
}

void Image::SetIoStrategy(std::shared_ptr<IoStrategy> strategy_ptr)
{
  strat_ = strategy_ptr;
}

bool Image::ReadFromDisk(const std::string& file_name)
{
  ImageData data = strat_->ReadFromDisk(file_name);
  rows_ = data.rows;
  cols_ = data.cols;
  max_val_ = data.max_val;
  std::vector<Pixel> data_pix;

  for (auto pix : data.data)
  {
    data_pix.emplace_back(Pixel({ pix.at(0), pix.at(1), pix.at(2) }));
  }
  data_ = data_pix;

  if (rows_ == 0 && cols_ == 0)
  {
    return false;
  }
  return true;
}

void Image::WriteToDisk(const std::string& file_name) const
{
  ImageData data;
  data.rows = rows_;
  data.cols = cols_;
  data.max_val = max_val_;
  std::vector<std::array<int, 3>> data_array;
  for (auto pix : data_)
  {
    std::array<int, 3> rgb = { pix.red, pix.green, pix.blue };
    data_array.push_back(rgb);
  }
  data.data = data_array;
  strat_->WriteToDisk(data, file_name);
}