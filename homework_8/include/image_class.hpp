
class Image
{
public:
  Image();
  Image(const std::string& filename);

  bool empty();
  const int rows();
  const int cols();
  uint8_t at(int row, int col) const;
  uint8_t& at(int row, int col);
  bool FillFromPgm(const std::string& file_name);
  void WriteToPgm(const std::string& file_name);
  std::vector<float> ComputeHistogram(int bins) const;
  void DownScale(int scale);
  void UpScale(int scale);

public:
  std::vector<uint8_t> data_;
  int rows_;
  int cols_;
};