#ifndef TABLE_HPP_
#define TABLE_HPP_

#define MAX_ROWS 20
#define MAX_COLUMNS 20

class Table {
	int rows;
	int columns;
	double mat[MAX_ROWS][MAX_COLUMNS];
public:
	Table(string fileName);
	~Table();
};

#endif