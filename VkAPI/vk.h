#pragma once
#include <QDateTime>
#include <QtWidgets>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <qjson\parser.h>
#include <QtWebKit>
#include <QWebView>
#include <QMenuBar>
#include <QMenu>
#include <ctime>
namespace vk{
	/* Variables */

	const QUrl API_URL("https://api.vk.com/method/"); 
	const QUrl AUTH_URL("https://oauth.vk.com/authorize");
	const QString APP_ID("4812089");
	const QString API_VERSION("5.28");
	const QString SCOPE("offline,wall,messages");

	/* Classes and Enums */
	
	enum ApiRequestError{ // Request Status
		NoErrors = 0,
		UknownError = 1,
		AppIsDisabled = 2,
		UknownMethod = 3,
		IncorrectSignature = 4,
		UserAuthFailed = 5,
		TooManyRequests = 6,
		PermissionDenied = 7,
		InvalidRequest = 8,
		FloodControl = 9,
		InternalServerError = 10,
		AppShouldBeDisabled = 11,
		CaptchaNeeded = 14,
		AccessDenied = 15,
		HttpAuthFailed = 16,
		ValidationRequired = 17,
		PermissionDeniedForNonStandaloneApp = 20,
		PermissionOnlyForStandaloneAndOpenAPI = 21,
		MethodWasDisabled = 23,
		ConfirmationRequired = 24,
		ParameterIsMissingOrInvalid = 100,
		InvalidApiID = 101,
		InvalidUserID = 113,
		InvalidTimestamp = 150,
		AccessToAlbumDenied = 200,
		AccessToAudioDenied = 201,
		AccessToGroupDenied = 203,
		AlbumIsFull = 300,
		VotePermissionDenied = 500,
		OperationPermissionDenied = 600,
		AdsError = 603,
		RequestFailed = 1000
	};
	class vkAccount; // Main class, which makes GET and POST requests to VK API
	class StatusLabel; // Status of a connected account
	class vkAccountUI; // vkAccount Wrapper. Shows first and last names, ID, Avatar, and account status
	class vkLogin; // Web Interface to connect an account
	class UserArea;
	class vkAlarm;
	class Requests;
	class RequestsViewer;
	class Logger;
	class RequestTimeSettings;
	class RequestCreator;
	class ParallelControl;
}
#include <flowlayout.h>
#include <vkLogin.h>
#include <vkAccout.h>
#include <StatusLabel.h>
#include <vkAccountUI.h>
#include <Requests.h>
#include <RequestsViewer.h>
#include <UserArea.h>
#include <vkAlarm.h>
#include <Logger.h>
#include <RequestTimeSettings.h>
#include <RequestCreator.h>
#include <ParallelControl.h>
