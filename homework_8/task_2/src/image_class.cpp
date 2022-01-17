#include <iostream>
#include <opencv2/opencv.hpp>
#include <png++/png.hpp>
#include <string>
#include <vector>

#include "homework_8.h"
Image::Image() {}
Image::Image(const std::string& filename) {
    png::image<png::rgb_pixel> image(filename);

    // igg::io_tools::ImageData image = igg::io_tools::ReadFromPgm(filename);
    // data_ = image.data;
    // rows_ = image.rows;
    // cols_ = image.cols;
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

// void Image::DownScale(int scale)
// {
//   std::vector<uint8_t> scaled_data(((rows_ + 1) / scale) * ((cols_ + 1) /
//   scale), 0); for (int r = 0; r < (rows_ / scale); r++)
//   {
//     for (int c = 0; c < (cols_ / scale); c++)
//     {
//       scaled_data[r * (cols_ / scale) + c] = at(r * scale, c * scale);
//     }
//   }
//   data_ = scaled_data;
//   rows_ = rows_ / scale;
//   cols_ = cols_ / scale;
// }

// void Image::UpScale(int scale)
// {
//   std::vector<uint8_t> scaled_data(((rows_ + 1) * scale) * ((cols_ + 1) *
//   scale), 0); for (int r = 0; r < (rows_ * scale); r++)
//   {
//     for (int c = 0; c < (cols_ * scale); c++)
//     {
//       scaled_data[r * (cols_ * scale) + c] = at(std::floor(r / scale),
//       std::floor(c / scale));
//     }
//   }
//   data_ = scaled_data;
//   rows_ = rows_ * scale;
//   cols_ = cols_ * scale;
// }

bool Image::empty() { return (data_.empty()); }

// getters
const int Image::rows() { return rows_; }
const int Image::cols() { return cols_; }