#include \textless QWidget>
#include <QMouseEvent>

class ProcamsWidget : public QWidget
{
    Q_OBJECT
public:
    virtual void paintEvent(QPaintEvent *) = 0;
    virtual QRectF boundingRect() const

protected:
    virtual void touchPressEvent(QMouseEvent *event);
    virtual void touchReleaseEvent(QMouseEvent *event);
    virtual void touchLongClickEvent(QMouseEvent *event);
};