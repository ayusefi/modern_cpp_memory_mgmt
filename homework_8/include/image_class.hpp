#include "IoStrategy.hpp"

#include <iostream>
#include <opencv2/opencv.hpp>
#include <png++/png.hpp>
#include <string>
#include <vector>
#include <memory>

class Image
{
public:
  Image();
  Image(const std::string& filename);

  // bool FillFromPgm(const std::string& file_name);
  // void WriteToPgm(const std::string& file_name);
  // std::vector<float> ComputeHistogram(int bins) const;
  // void DownScale(int scale);
  // void UpScale(int scale);

public:
  struct Pixel
  {
    int red;
    int green;
    int blue;
  };

  bool empty();
  const int rows();
  const int cols();

  Pixel at(int row, int col) const
  {
    return data_[row * cols_ + col];
  }
  Pixel& at(int row, int col)
  {
    return data_[row * cols_ + col];
  }
  void SetIoStrategy(std::shared_ptr<IoStrategy> strategy_ptr);

private:
  std::vector<Pixel> data_;
  int rows_;
  int cols_;
};
