#pragma once
#include <QDateTime>
#include <QtWidgets>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
namespace vk{
	//Variables
	const QUrl API_URL("https://api.vk.com/method/");
	//Classes
	class vkAccount;

}
#include <vk_api.h>
#include <vkAccout.h>