# サンプル03 フルカラーLED
---

## 概要
今回はフルカラーLEDの点灯回路を説明します。  
今まで2回にわたりLEDの制御方法について学びましたが、その知識を使って自由に色を制御する方法を説明します。

## 回路説明
今回使用するのはフルカラーLEDです。
フルカラーLEDは色の三原色の赤、緑、青のLEDがひとつのモジュールになっているものです。ArduinoのD9~D11のピンにそれぞれR(赤)、G(緑)、B(青)のLEDが接続されています。  
LEDは色ごとに接続する抵抗の値が違います。これはそれぞれ降下電圧が違うのと色ごとの人間の目の感度が違うためです。
すべての色を出力すると白色になります。

## プログラム説明
はじめに白色を出力する方法を説明します。
上記で述べたとおりすべての色を出力すれば白になるので次のように記述します。

```C
#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

void setup(){
   pinMode(RED_PIN, OUTPUT);
   pinMode(GREEN_PIN, OUTPUT);
   pinMode(BLUE_PIN, OUTPUT);

   digitalWrite(RED_PIN, HIGH);
   digitalWrite(GREEN_PIN, HIGH);
   digitalWrite(BLUE_PIN, HIGH);
}

void loop(){
}
```

赤のみを出力したいときはG、BのLEDをLOWにし、G、Bのみを出力したい時も同様にその他の色をLOWにします。
ではR、G、B以外の色はどうするのでしょうか？  
RGBは光の三原色なのでこれらを組み合わせれば表現できます。例えばシアンは緑と青なので
```C
digitalWrite(RED_PIIN, LOW);
digitalWrite(GREEN_PIIN, HIGH);
digitalWrite(BLUE_PIIN, HIGH);
```
のように記述することで表現できます。
それぞれが明るさ100%ではなく様々な明るさを組み合わせたいのでPWMを使います。例えばピンクはRGBそれぞれの値が247、171、166です。
なので次のように記述します。
```C
analogWrite(RED_PIN, 247);
analogWrite(GREEN_PIN, 171);
analogWrite(BLUE_PIN, 166);
```

サンプルプログラムとして時間ごとにRGBの値が徐々にかわりグラデーションとなるプログラムを置きます。  
[Sample03_FullColorLED.ino](Sample03_FullColorLED.ino)
各色の値が同じだと白にしかならないので、Rを基準としてGはRの二倍、BはRの3倍の時間で一巡するようにしています。