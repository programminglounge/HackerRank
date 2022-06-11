#include <bits/stdc++.h>
#include <vector>

int find_dot(std::string s)
{
  int first = s.find('.');
  if (first == std::string::npos)
  {
    return -1;
  }
  else
  {
    return first;
  }
}

int find_first_space(std::string s)
{
  int first = s.find(' ');
  if (first == std::string::npos)
  {
    return -1;
  }
  else
  {
    return first;
  }
}

int find_third_space(std::string s)
{
  int first = s.find(' ');
  if (first == std::string::npos)
  {
    return -1;
  }
  else
  {
    s = s.substr(first+1);
    int second = s.find(' ');
    if (second == std::string::npos)
    {
      return -1;
    }
    else
    {
      s = s.substr(second+1);
      int third = s.find(' ');
      if (third == std::string::npos)
      {
        return first+second+s.length()+2;
      }
      else
      {
        return first+second+third+2;
      }
    }
  }
}

int main()
{
  std::string s;
  std::vector<std::pair<std::string, int>> my_map;
  getline(std::cin, s);
  int pos_dot = find_dot(s);
  std::string sub2 = "";
  std::string sub = "";
  while (pos_dot != -1)
  {
    sub = s.substr(0, pos_dot);
    int pos_third_space = find_third_space(sub);
    int newstart = 0;
    if (pos_third_space == -1)
    {
      pos_dot = find_dot(s);
      sub = s.substr(0, pos_dot);
    }
    else
    {
      while(pos_third_space != -1)
      {
        sub2 = sub.substr(0, pos_third_space);
        if (my_map.size() == 0)
        {
          my_map.push_back(std::make_pair(sub2, 1));
          newstart = find_first_space(sub);
          sub = sub.substr(newstart+1);
          pos_third_space = find_third_space(sub);
        }
        else
        {
          int i = 0; 
          for (i = 0; i<my_map.size(); i++)
          {
            if (my_map[i].first == sub2)
            {
              my_map[i].second++;
              newstart = find_first_space(sub);
              sub = sub.substr(newstart+1);
              pos_third_space = find_third_space(sub);
              break;
            }
          }
          if (i == my_map.size())
          {
            my_map.push_back(std::make_pair(sub2, 1));
            newstart = find_first_space(sub);
            sub = sub.substr(newstart+1);
            pos_third_space = find_third_space(sub);
          }
        }
      }
      
      pos_dot = find_dot(s);
      if(pos_dot != s.length()-1)
      {
        s = s.substr(pos_dot+2);
        pos_dot = find_dot(s);
      }
      else
      {
        s = "";
        pos_dot = -1;
      }
    }
  }
  int max = 0;
  int pos = 0;
  int i = 0;
  for (i = 0; i<my_map.size(); i++)
  {
    if (my_map[i].second>max)
    {
      max = my_map[i].second;
      pos = i;
    }
  }
  std::cout << my_map[pos].first << std::endl;
  return 0;
}
