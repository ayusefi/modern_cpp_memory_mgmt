
#include <cstdint>
#include <vector>
#include <array>
#include <string>

struct ImageData
{
  int rows;
  int cols;
  uint8_t max_val;
  std::vector<std::array<int, 3>> data;
};

class IoStrategy
{
public:
  IoStrategy() = default;
  ~IoStrategy() = default;

  virtual ImageData ReadFromDisk(const std::string& file_name) = 0;
  virtual bool WriteToDisk(const ImageData& data, const std::string& file_name) = 0;
};

class PpmIoStrategy : public IoStrategy
{
public:
  PpmIoStrategy() = default;
  ~PpmIoStrategy() = default;
  ImageData ReadFromDisk(const std::string& file_name) override;
  bool WriteToDisk(const ImageData& data, const std::string& file_name) override;
};

class PngIoStrategy : public IoStrategy
{
public:
  ImageData ReadFromDisk(const std::string& file_name) override;
  bool WriteToDisk(const ImageData& data, const std::string& file_name) override;
};