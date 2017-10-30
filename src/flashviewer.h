//
// Created by newcoderlife on 17-10-30.
//

#ifndef BUPT_CLIENT_FLASHVIEWER_H
#define BUPT_CLIENT_FLASHVIEWER_H

#include <QtWebEngineWidgets/QWebEngineView>

class FlashViewer : public QWebEngineView {
public:
    explicit FlashViewer(QWidget *parent = nullptr);

    void setUrl(const QString &url);

private:
    QWebEnginePage *getWebEnginePage();
};


#endif //BUPT_CLIENT_FLASHVIEWER_H
