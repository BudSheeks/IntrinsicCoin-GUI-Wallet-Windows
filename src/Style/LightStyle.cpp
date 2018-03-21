// Copyright (c) 2015-2017, The Intrinsiccoin developers
//
// This file is part of Intrinsiccoin.
//
// Intrinsiccoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Intrinsiccoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Intrinsiccoin.  If not, see <http://www.gnu.org/licenses/>.

#include "LightStyle.h"

namespace WalletGui {

LightStyle::LightStyle() : Style("light", "Light") {

}

QString LightStyle::statusBarBackgroundColor() const {
  return "#eeffcc"; //#e7e7e7
}

QString LightStyle::statusBarFontColor() const {
  return "#000000";
}

QString LightStyle::headerBackgroundColor() const {
  return "#eeffcc"; //#e7e7e7
}

QString LightStyle::headerBorderColor() const {
  return "#dddddd";
}

QString LightStyle::addressFontColor() const {
  return "#000000";
}

QString LightStyle::balanceFontColor() const {
  return "#000000";
}

QString LightStyle::toolButtonBackgroundColorNormal() const {
  return "#edf0f7";
}

QString LightStyle::toolButtonBackgroundColorHover() const {
  return "#d1deeb";
}

QString LightStyle::toolButtonBackgroundColorPressed() const {
  return "#5f9cc7";
}

QString LightStyle::toolButtonFontColorNormal() const {
  return "#000000";
}

QString LightStyle::toolButtonFontColorDisabled() const {
  return "#4d000000";
}

QString LightStyle::toolBarBorderColor() const {
  return "#dddddd";
}

QString LightStyle::getWalletSyncGifFile() const {
	return QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/wallet-sync.png");
	//return QString(":icons/light/wallet-sync");
}

QPixmap LightStyle::getLogoPixmap() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/logo_bl.png"));
}

QPixmap LightStyle::getBalanceIcon() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/balance.png"));
}

QPixmap LightStyle::getConnectedIcon() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/connected.png"));
}

QPixmap LightStyle::getDisconnectedIcon() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/disconnected.png"));
}

QPixmap LightStyle::getEncryptedIcon() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/encrypted.png"));
}

QPixmap LightStyle::getNotEncryptedIcon() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/decrypted.png"));
}

QPixmap LightStyle::getSyncedIcon() const {
  return QPixmap(QString("C:/Users/ashwan_2/Desktop/ForkNote/IntrinsicCoin-GUI-Wallet/src/icons/synced.png"));
}

}
