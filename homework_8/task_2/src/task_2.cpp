#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <memory>

#include "homework_8.h"

int main()
{
  int bin_size = 2;
  int scale_down = 2;
  int scale_up = 2;
  std::array<int, 2> pixel_value = { 511, 511 };

  Image img("../data/lenna.png");
  auto strategy = std::make_shared<PngIoStrategy>();

  img.SetIoStrategy(strategy);

  if (img.empty())
  {
    std::cerr << "[ERROR] Image not loaded.\n";
    return 1;
  }

  std::cout << "PNG Image Loaded: " << std::endl;
  std::cout << "Size (Rows x Cols): " << img.rows() << " x " << img.cols() << std::endl;
  Image::Pixel pix = img.at(pixel_value.at(0), pixel_value.at(1));
  std::cout << "Value at row,col (" << pixel_value.at(0) + 1 << ", " << pixel_value.at(1) + 1 << "): Red: " << pix.red
            << "\tGreen: " << pix.green << "\tBlue: " << pix.blue << std::endl;

  // std::vector<float> hist = img.ComputeHistogram(bin_size);
  // std::cout << "Number of Bins: " << hist.size() << std::endl;
  // for (int i = 0; i < hist.size(); i++)
  // {
  //   std::cout << "Size of Bin No " << i << ": " << hist[i] << std::endl;
  // }
  // img.DownScale(2);
  // std::cout << "\nAFTER SCALE DOWN by " << scale_down << ":\n";
  // std::cout << "rows: " << img.rows() << std::endl;
  // std::cout << "cols: " << img.cols() << std::endl;
  // std::cout << "value at data_[0, 1]: " << img.at(511, 510) << std::endl;
  // hist = img.ComputeHistogram(bin_size);
  // std::cout << "Number of Bins: " << hist.size() << std::endl;
  // for (int i = 0; i < hist.size(); i++)
  // {
  //   std::cout << "Size of Bin No " << i << ": " << hist[i] << std::endl;
  // }

  // img.UpScale(2);
  // std::cout << "\nAFTER SCALE UP by " << scale_up << ":\n";
  // std::cout << "rows: " << img.rows() << std::endl;
  // std::cout << "cols: " << img.cols() << std::endl;
  // std::cout << "value at data_[0, 1]: " << img.at(511, 510) << std::endl;
  // hist = img.ComputeHistogram(bin_size);
  // std::cout << "Number of Bins: " << hist.size() << std::endl;
  // for (int i = 0; i < hist.size(); i++)
  // {
  //   std::cout << "Size of Bin No " << i << ": " << hist[i] << std::endl;
  // }
  return 0;
}