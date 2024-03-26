// Copyright (c) RealCoolEngineer. 2024. All rights reserved.
// Author: beiklive
// Date: 2024-03-25
#ifndef INC_EVENT_EXP_HH_
#define INC_EVENT_EXP_HH_

#include<iostream>

#define GLOBAL_EVENT_EXP
#ifdef GLOBAL_EVENT_EXP
class GlobalEventExp : public testing::Environment
{
public:
    GlobalEventExp() = default;
    ~GlobalEventExp() = default;

    virtual void SetUp()
    {
        std::cout << "GlobalEvent Setup" << std::endl;
    }

    virtual void TearDown()
    {
        std::cout << "GlobalEvent TearDown" << std::endl;
    }

};

TEST(GlobalExp, globalCase1)
{
    EXPECT_TRUE(true);
}

TEST(GlobalExp, globalCase2)
{
    EXPECT_TRUE(true);
}
#endif

#define SUITE_EVENT_EXP
#ifdef SUITE_EVENT_EXP
class SuiteEventExp : public testing::Test {
 protected:
  static void SetUpTestCase() {
        std::cout << "suitNum : " << suitNum << std::endl;
  }
  static void TearDownTestCase() {
        std::cout << "suitNum : " << suitNum << std::endl;
  }
  static int suitNum;
};

int SuiteEventExp::suitNum = 10;    // 初始化为 10

TEST_F(SuiteEventExp, Test1)
{
    SuiteEventExp::suitNum += 5;
}
TEST_F(SuiteEventExp, Test2)
{
    SuiteEventExp::suitNum += 5;
}

#endif

#define CASE_EVENT_EXP
#ifdef CASE_EVENT_EXP

class cal{

public:
    int a = 10;
    void Init(){ std::cout << "Init" << std::endl; }
    void Finish(){ std::cout << "Finish" << std::endl; }
    int Num(){return --a;}
};

class CaseEventExp : public testing::Test {
 protected:
  virtual void SetUp() {
        m_cal.Init();
  }
  virtual void TearDown() {
        m_cal.Finish();
  }

  cal m_cal;
};

TEST_F(CaseEventExp, CalCase1)
{
    std::cout << m_cal.Num() << std::endl;
}

TEST_F(CaseEventExp, CalCase2)
{
    std::cout << m_cal.Num() << std::endl;
}

#endif // CASE_EVENT_EXP
#endif  // INC_EVENT_EXP_HH_
