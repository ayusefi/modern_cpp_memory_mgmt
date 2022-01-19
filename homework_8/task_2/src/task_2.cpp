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
  std::array<int, 2> pixel_value = { 100, 100 };

  Image img;
  // auto strategy = std::make_shared<PngIoStrategy>();
  auto strategy = std::make_shared<PpmIoStrategy>();

  img.SetIoStrategy(strategy);

  // img.ReadFromDisk("../data/lenna.png");
  img.ReadFromDisk("../data/pbmlib.ascii.ppm");

  if (img.empty())
  {
    std::cerr << "[ERROR] Image not loaded.\n";
    return 1;
  }

  std::cout << "Image Loaded: " << std::endl;
  std::cout << "Size (Rows x Cols): " << img.rows() << " x " << img.cols() << std::endl;
  Image::Pixel pix = img.at(pixel_value.at(0), pixel_value.at(1));
  std::cout << "Value at row,col (" << pixel_value.at(0) + 1 << ", " << pixel_value.at(1) + 1 << "): Red: " << pix.red
            << "\tGreen: " << pix.green << "\tBlue: " << pix.blue << std::endl;

  img.DownScale(scale_down);
  std::cout << "\nAFTER SCALE DOWN by " << scale_down << ":\n";
  std::cout << "Size (Rows x Cols): " << img.rows() << " x " << img.cols() << std::endl;
  pix = img.at(pixel_value.at(0), pixel_value.at(1));
  std::cout << "Value at row,col (" << pixel_value.at(0) + 1 << ", " << pixel_value.at(1) + 1 << "): Red: " << pix.red
            << "\tGreen: " << pix.green << "\tBlue: " << pix.blue << std::endl;

  img.UpScale(scale_up);
  std::cout << "\nAFTER SCALE UP by " << scale_up << ":\n";
  std::cout << "Size (Rows x Cols): " << img.rows() << " x " << img.cols() << std::endl;
  pix = img.at(pixel_value.at(0), pixel_value.at(1));
  std::cout << "Value at row,col (" << pixel_value.at(0) + 1 << ", " << pixel_value.at(1) + 1 << "): Red: " << pix.red
            << "\tGreen: " << pix.green << "\tBlue: " << pix.blue << std::endl;

  // img.WriteToDisk("../data/test.png");
  img.WriteToDisk("../data/test.ppm");

  // std::vector<float> hist = img.ComputeHistogram(bin_size);
  // std::cout << "Number of Bins: " << hist.size() << std::endl;
  // for (int i = 0; i < hist.size(); i++)
  // {
  //   std::cout << "Size of Bin No " << i << ": " << hist[i] << std::endl;
  // }

  return 0;
}