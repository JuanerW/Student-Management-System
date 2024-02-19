#include <iostream>
#include <mysql.h>
#include "Student.h"
#include "ConnectDB.h"
#include <vector>

using namespace std;



//������ַ
const char* host = "127.0.0.1";
//���ݿ��û�
const char* user = "root";
//���ݿ����룬���Լ���
const char* pw = "meng2003";
//���ݿ�����
const char* dbName = "stusystem";
//���ݿ�˿ڣ�mysql��3306
const int port = 3306;

int main() {

    //���Բ���sql
    char insertSql[256];

    //    Student student("ѧ����",19,"��","������ƽ","��ѧϵ");
    //
    // Ϊsql��ֵ
    //    sprintf(insertSql,"insert into Student (sname,sex,age,native,dept) values ('%s','%s',%d,'%s','%s')",
    //            student.getSname().c_str(),student.getSex().c_str(),student.getAge(),student.getNative().c_str(),student.getDept().c_str());

    //    printf("�����ַ�����%s\n",insertSql);
    //�����������ݿ����
    ConnectDB connectDb(host, user, pw, dbName, port);
    //�������ݿ�
    connectDb.connect();
    //�õ����ݿ�
    MYSQL* con = connectDb.getCon();
    //    if(mysql_query(con,insertSql)){
    //        fprintf(stderr,"Failed to insert data :Error %s", mysql_error(con));
    //        printf("����ʧ�ܣ�\n");
    //        return -1;
    //    }

        //���Ը���ѧ��
    //    char updateSql[256];
    //    Student student("ѧ����",19,"��","�����γ�","Ӣ��ϵ");
    //    student.setId(22);
    //
    //     // Ϊsql��ֵ
    //    sprintf(updateSql,"update student set sname='%s',sex='%s',age=%d,native='%s',dept='%s' where id=%d",
    //            student.getSname().c_str(),student.getSex().c_str(),student.getAge(),student.getNative().c_str(),student.getDept().c_str(),student.getId());
    //
    //    printf("�����ַ�����%s\n",updateSql);
    //
    //    if(mysql_query(con,updateSql)){
    //        fprintf(stderr,"Failed to update data :Error %s", mysql_error(con));
    //        printf("����ʧ�ܣ�\n");
    //        return -1;
    //    }
    //
    //    //ɾ��
    //    char delSql[256];
    //     // Ϊsql��ֵ
    //    sprintf(delSql,"delete from student where id = %d",21);
    //    printf("ɾ���ַ�����%s\n",delSql);
    //
    //    if(mysql_query(con,delSql)){
    //        fprintf(stderr,"Failed to delete data :Error %s", mysql_error(con));
    //        printf("ɾ��ʧ�ܣ�\n");
    //        return -1;
    //    }
        //��ѯ

    char quereSql[256];
    //ȫ����ѯ
    sprintf(quereSql, "select * from student");
    if (mysql_query(con, quereSql)) {
        fprintf(stderr, "Failed to query data :Error %s", mysql_error(con));
        printf("��ѯʧ�ܣ�\n");
        return -1;
    }
    MYSQL_RES* res = mysql_store_result(con);

    MYSQL_ROW row;
    vector<Student>stuList;
    while ((row = mysql_fetch_row(res))) {
        Student stu;
        stu.setId(atoi(row[0]));
        stu.setSname(row[1]);
        stu.setSex(row[2]);
        stu.setAge(atoi(row[3]));
        stu.setNative(row[4]);
        stu.setDept(row[5]);
        stuList.push_back(stu);
    }
    for (Student s : stuList) {
        cout << s << endl;
    }
    //    mysql_close(con);
    return 0;
}
