//
//
//

#ifndef YYCAD_CORE_DXF_H
#define YYCAD_CORE_DXF_H

class feature {
public:
    feature();
    virtual ~feature();
};


class dxf {
public:
    dxf();
    virtual ~dxf();

public:
    void insert_feature(feature const *fp);
};

#endif
