
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

  Pixel at(int row, int col) const;
  Pixel& at(int row, int col);

private:
  // std::vector<uint8_t> data_;
  std::vector<Pixel> data_;

  int rows_;
  int cols_;
};
