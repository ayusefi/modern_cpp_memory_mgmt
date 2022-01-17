#include <iostream>
#include <string>
#include <vector>

#include "homework_8.h"

int main()
{
  int bin_size = 2;
  int scale_down = 2;
  int scale_up = 2;

  Image img("../data/lena.ascii.pgm");

  // if (img.empty())
  // {
  //   std::cerr << "[ERROR] Image not loaded.\n";
  //   return 1;
  // }
  // img.FillFromPgm("../data/lena.ascii.pgm");
  // img.WriteToPgm("../lenna_test.pgm");
  // std::cout << "rows: " << img.rows() << std::endl;
  // std::cout << "cols: " << img.cols() << std::endl;
  // std::cout << "value at data_[0, 1]: " << img.at(511, 510) << std::endl;
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