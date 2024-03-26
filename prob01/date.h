class Date {
 public:
  Date() : Date(1, 1, 2022) {}
  Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}

  int GetDay() const { return day_; }
  void SetDay(int day) { day_ = day; }
  int GetMonth() const { return month_; }
  void SetMonth(int month) { month_ = month; }
  int GetYear() const { return year_; }
  void SetYear(int year) { year_ = year; }

 private:
  int day_;
  int month_;
  int year_;
};