<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE TS>
<TS version="2.1" language="en_US">
<context>
    <name>HelpDialog</name>
    <message>
        <location filename="helpdialog.ui" line="14"/>
        <source>Справка</source>
        <translation>Help</translation>
    </message>
    <message>
        <location filename="helpdialog.ui" line="23"/>
        <source>После запуска приложения открывается главный экран приложения. Непосредственно после запуска и на протяжении всей работы с приложением пользователю доступны следующие функции:
1)	Сохранение результатов работы в указанный файл. Для этого необходимо открыть вкладку «Файл» главного меню и нажать «Сохранить как» или воспользоваться горячей клавишей «Ctrl+Shift+S». Также, если ранее при данном запуске программы не была проведена загрузка сохранённых результатов работы из файла или сохранение результатов работы в файл, то аналогичную функцию будет выполнять опция «Сохранить» (горячая клавиша – «Ctrl+S»). Далее откроется диалоговое окно выбора директории для сохранения результатов работы и имени файла, в который данные результаты будут сохранены. В итоге в указанной директории будет создан или перезаписан файл с указанным именем, в который будут сохранены результаты работы, которые потом можно будет загрузить при помощи опции «Открыть».
2)	Сохранение результатов работы в файл, из которого они были загружены или в который они были ранее сохранены. Если ранее при данном запуске программы была проведена загрузка сохранённых результатов работы из файла или сохранение результатов работы в файл, то чтобы воспользоваться данной функцией необходимо открыть вкладку «Файл» главного меню и нажать «Сохранить» или воспользоваться горячей клавишей «Ctrl+S». Результаты будут сохранены в файл, который использовался ранее.
3)	Загрузка ранее сохранённых результатов работы. Для этого необходимо открыть вкладку «Файл» главного меню и нажать «Открыть» или воспользоваться горячей клавишей «Ctrl+O». Далее откроется диалоговое окно выбора файла. В случае, если формат выбранного файла корректен, то есть он был ранее сохранён при помощи функции «Сохранить», будут загружены результаты работы. Если файл имеет некорректный формат, то будет выдано сообщение об ошибке.
4)	Выбор языка. Для этого необходимо открыть вкладку «Настройки», затем – вкладку «Язык / Language», в которой выбрать необходимый язык: русский или английский. Интерфейс приложения будет автоматически переведён. При следующем запуске приложения интерфейс будет загружен на языке, выбранном ранее.
5)	Выбор модели прогнозирования. Для этого необходимо открыть вкладку «Настройки», затем – вкладку «Модель прогнозирования», в которой выбрать необходимую модель: прогнозирование нечётких временных рядов или прогнозирование временных рядов на основе описания нечётких тенденций. При изменении данной настройки результаты прогнозирования, заданные нечёткие множество и интервалы сбрасываются. Данная настройка будет сохранена при следующем запуске программы.
6)	Сделать заметку. Для этого необходимо нажать кнопку сделать заметку. Будет открыто окно «Заметка» в котором пользователю предоставляется возможность ввести заметку в текстовое поле и сохранить её, нажав кнопку «Сохранить» или «крестик». При сохранении результатов работы в том числе будет сохранены заметка.
7)	Загрузить данные. Для этого необходимо нажать кнопку «Загрузить данные». Будет открыто окно «Ввод данных». В данном окне пользователю предоставляются следующие опции:
	a.	Выбрать разделитель целой и дробной части значений во входном файле (точка или запятая). Данная опция определяет в каком формате записаны данные во входном файле для их корректного чтения.
	b.	Ввести набор символов, которые во входном файле выступают разделителями между значениями. В данное поле могут быть введены любые символы, выступающие разделителями во входном файле (например точка с запятой). Символы табуляции, перевода строки и пробел всегда считаются разделяющими.
	c.	Ввод данных из файла. Для этого необходимо нажать кнопку «Ввести из файла» и в открывшемся диалоговом окне выбрать входной файл. В результате данные будут введены и отображены в текстовом поле в данном окне.
	d.	Удалить последнее значение. Для этого необходимо нажать кнопку «Удалить последнее». В случае, если ряд не является пустым, из него будет удалено последнее значение.
	e.	Добавить значение в конец ряда в интерфейсе. Для этого необходимо ввести новое значение в поле «Новое значение» (разделитель целой и дробной части – точка или запятая) и нажать кнопку «Добавить значение» или клавишу «Enter». В случае, если введённое значение корректно, оно будет добавлено в конец ряда.
	f.	Очистить данные. Для этого необходимо нажать кнопку «Очистить». В результате временной ряд станет пустым.
	g.	Просмотреть введённый временной ряд. Данные отображаются в текстовом поле в данном окне. В случае если количество значений ряда не превышает 2000, ряд отображается целиком. Если количество значений превышает 2000, отображаются только первые 1000 и последние 1000 значений. В случае, если количество значений ряда меньше трёх, отображается сообщение о том, что данного количества значений недостаточно для прогнозирования.
	h.	Применить изменения входных данных. Для этого необходимо нажать кнопку «Применить» или «крестик». В случае, если данные были изменены, результаты прогнозирования, заданные нечёткие множества и интервалы сбрасываются. Также пересчитываются характеристики временного ряда на главном экране: минимум ряда, максимум ряда, среднее значение ряда, медиана ряда и перерисовывается график исходного (введённого) числового ряда.
8)	Открыть справку. Для этого необходимо нажать кнопку «Справка» в главном меню.

Если введённый временной ряд имеет длину не меньшую трёх значений, становятся доступными следующие функции (ранее доступные функции остаются таковыми):
1)	Задание интервалов для прогнозирования исходного временного ряда. Для этого необходимо нажать кнопку «Задать интервалы» на главном экране, в результате чего будет открыто окно «Задание интервалов», которое предоставляет пользователю следующие опции:
	a.	Задание интервалов для исходного ряда. Производится во вкладке «Для исходного ряда». Способы задания и информация, представляемая во вкладке описана ниже.
	b.	Задание интервалов для ряда абсолютных значений первых разностей. Производится во вкладке «Для исходного ряда» и только при прогнозировании временных рядов на основе описания нечётких тенденций, в ином случае вкладка неактивна. Способы задания и информация, представляемая во вкладке описана ниже
	c.	Применить изменения. Для этого необходимо нажать кнопку «Применить» или «крестик». В случае, если данные были изменены, результаты прогнозирования, соответствующие виду изменённых интервалов (для исходного ряда или для ряда абсолютных значений первых разностей) заданные нечёткие множества сбрасываются
	d.	Каждая из вкладок предоставляет пользователю следующие опции:
		i.	Информация о максимуме соответствующего ряда
		ii.	Задание отступа вправо от максимального значения ряда для задания области значений. Поле D2 для вкладки «Для исходного ряда» и поле D для вкладки «Для ряда абсолютных значений первых разностей»
		iii.	Выбор способа задания интервалов из следующего списка:
			1.	Distribution-based length
			2.	Average-based length
			3.	Half of average-based
			4.	Natural partition by 3-4-5 rules
			5.	По количеству
		iv.	Задание количества интервалов для ввода способом «По количеству»
		v.	Задание интервалов. Кнопка «Ввести интервалы»
		vi.	 Просмотреть заданные интервалы. Данные отображаются в текстовом поле в данном окне. В случае если количество интервалов не превышает 2000, они отображаются целиком. Если количество интервалов превышает 2000, отображаются только первые 1000 и последние 1000 интервалов.
	e.	Дополнительно вкладка «Для исходного ряда» предоставляет следующие опции:
		i.	Информация о минимуме соответствующего ряда
		ii.	Задание отступа влево от минимального значения ряда для задания области значений. Поле D1.

2)	Задание нечётких множеств для прогнозирования исходного временного ряда. Для этого необходимо нажать кнопку «Задать НМ» на главном экране, в результате чего будет открыто окно «Задание нечётких множеств», которое предоставляет пользователю следующие опции:
	a.	Задание нечётких множеств для исходного ряда. Производится во вкладке «Для исходного ряда». Способы задания и информация, представляемая во вкладке описана ниже.
	b.	Задание нечётких множеств для ряда абсолютных значений первых разностей. Производится во вкладке «Для исходного ряда» и только при прогнозировании временных рядов на основе описания нечётких тенденций, в ином случае вкладка неактивна. Способы задания и информация, представляемая во вкладке описана ниже.
	c.	Для задания нечётких множеств каждого из видов необходимо, чтобы ранее были заданы интервалы соответствующего вида. В противном случае вкладка для задания данного вида нечётких множеств будет недоступна.
	d.	Применить изменения. Для этого необходимо нажать кнопку «Применить» или «крестик». В случае, если данные были изменены, результаты прогнозирования сбрасываются
	e.	Каждая из вкладок предоставляет пользователю следующие опции:
		i.	Выбрать способ автоматического задания нечётких множеств:
			1.	Следуя Q. Song
			2.	«Плавный» подход
	ii.	Задать нечёткие множества в соответствии с выбранным способом. Для этого необходимо нажать кнопку «Задать НМ»
	iii.	Просмотреть нечёткие множества. Данные отображаются в текстовом поле в данном окне. В случае если количество нечётких множеств не превышает 400, они отображаются целиком. Если количество нечётких множеств превышает 400, отображаются только первые 200 и последние 200 нечётких множеств. В случае, если количество интервалов не превышает 400, для каждого нечёткого множества отображаются степени принадлежности всем интервалам. Если количество интервалов превышает 400, отображаются только степени принадлежности первым 200 и последним 200 интервалам

Если в случае для прогнозирование нечётких временных рядов заданы нечёткие множества для исходного ряда, а в случае прогнозирование временных рядов на основе описания нечётких тенденций – ещё и для ряда абсолютных значений первых разностей, становятся доступными следующие функции (ранее доступные функции остаются таковыми):
1)	Выбор способа дефаззификации. Для этого требуется выбрать необходимый вариант из списка «Способ дефаззификации данных» на главном экране:
	a.	Следуя Q. Song
	b.	Centroid method
2)	Выбор метрики для оценки точности. Для этого требуется выбрать необходимый вариант из списка «Метрика для оценка точности» на главном экране:
	a.	MSE
	b.	RMSE
	c.	MAE
	d.	MAPE
	e.	MASE
3)	Прогнозирование в соответствии с выбранным методом прогнозирования и заданными настройками. Для этого необходимо нажать кнопку «Спрогнозировать» на главном экране. В результате будет построена модель прогнозирования и будут рассчитаны значения исходного временного ряда в соответствии с данной моделью (не основании которых будет определена ошибка прогнозирования), а также одно значение идущее непосредственно после последнего значения исходного временного ряда.

После нажатия кнопки «Спрогнозировать» становятся доступными следующие функции (ранее доступные функции остаются таковыми):
1)	Просмотр ошибки прогнозирования, рассчитанной при помощи указанной метрики, в поле «Ошибка прогнозирования» на главном экране
2)	Просмотр спрогнозированного значения в поле «Спрогнозированное значение» на главном экране
3)	Просмотр графика спрогнозированных значений исходного временного ряда (соответствие цвета графику указывается в легенде) на главном экране
4)	Просмотр продолжения графика исходного временного ряда до спрогнозированного значения на главном экране
5)	Просмотр построенных при прогнозировании фаззифицированных данных. Для этого необходимо нажать кнопку «Посмотреть НВР» на главном экране. В результате будет открыто окно «Фаззифицированные данные», в котором будет указана соответствующая информация
6)	Просмотр хода выполнения программы. Для этого необходимо нажать кнопку «Посмотреть ход выполнения» на главном экране. В результате будет открыто окно «Ход выполнения», в котором будет указана соответствующая информация
7)	Просмотр спрогнозированных значений. Для этого необходимо нажать кнопку «Результаты прогнозирования» на главном экране. В результате будет открыто окно «Результаты прогнозирования», в котором будет указана соответствующая информация
Если в текущий момент открыто какое-либо окно, кроме главного экрана, работа с главным экраном недоступна.
При наведении на элементы интерфейса программа выдаёт пользователю подсказки по работе.
Для завершения работы с приложением необходимо нажать кнопку «крестик» окна главного экрана.
</source>
        <translation>After launching the application, the main screen of the application opens. The following functions are available to the user immediately after launch and throughout the entire operation of the application:
1) Saving the results of the work to the specified file. To do this, open the &quot;File&quot; tab of the main menu and click &quot;Save as&quot; or use the hotkey &quot;Ctrl+Shift+S&quot;. Also, if previously, at this launch of the program, the saved work results were not downloaded from a file or the work results were saved to a file, then the &quot;Save&quot; option (hotkey – &quot;Ctrl+S&quot;) will perform a similar function. Next, a dialog box opens for selecting the directory to save the results of the work and the name of the file to which these results will be saved. As a result, a file with the specified name will be created or overwritten in the specified directory, in which the results of the work will be saved, which can then be downloaded using the &quot;Open&quot; option.
2) Saving the results of the work to the file from which they were uploaded or to which they were previously saved. If earlier, at this launch of the program, the saved work results were downloaded from a file or the work results were saved to a file, then to use this function, open the &quot;File&quot; tab of the main menu and click &quot;Save&quot; or use the &quot;Ctrl+S&quot; hotkey. The results will be saved to the file that was used earlier.
3) Loading previously saved work results. To do this, open the &quot;File&quot; tab of the main menu and click &quot;Open&quot; or use the &quot;Ctrl+O&quot; hotkey. Next, a file selection dialog box opens. If the format of the selected file is correct, that is, it was previously saved using the &quot;Save&quot; function, the results of the work will be uploaded. If the file has an incorrect format, an error message will be displayed.
4) Language selection. To do this, open the &quot;Settings&quot; tab, then the &quot;Language&quot; tab, in which you select the desired language: Russian or English. The application interface will be automatically translated. The next time you launch the application, the interface will be loaded in the language you selected earlier.
5) Choosing a forecasting model. To do this, open the &quot;Settings&quot; tab, then the &quot;Forecasting Model&quot; tab, in which you select the necessary model: forecasting fuzzy time series or forecasting time series based on the description of fuzzy trends. When this setting is changed, the prediction results, the specified fuzzy sets and intervals are reset. This setting will be saved the next time the program is started.
6) Make a note. To do this, click the make a note button. The &quot;Note&quot; window will open in which the user is given the opportunity to enter a note in a text field and save it by clicking the &quot;Save&quot; or &quot;cross&quot; button. When saving the results of the work, the note will also be saved.
7) Upload the data. To do this, click the &quot;Upload data&quot; button. The &quot;Data Entry&quot; window will open. In this window, the user is provided with the following options:
	a. Select the separator of the integer and fractional parts of the values in the input file (dot or comma). This option determines in which format the data in the input file is written for correct reading.
	b. Enter a set of characters that act as delimiters between values in the input file. Any characters that act as delimiters in the input file (for example, a semicolon) can be entered in this field. The tab, line feed, and space characters are always considered delimiters.
	c. Entering data from a file. To do this, click the &quot;Enter from file&quot; button and select the input file in the dialog box that opens. As a result, the data will be entered and displayed in a text field in this window.
	d. Delete the last value. To do this, click the &quot;Delete last&quot; button. If the row is not empty, the last value will be deleted from it.
	e. Add a value to the end of the row in the interface. To do this, enter a new value in the &quot;New value&quot; field (the separator of the whole and fractional parts is a dot or comma) and press the &quot;Add value&quot; button or the &quot;Enter&quot; key. If the entered value is correct, it will be added to the end of the row.
	f. Clear the data. To do this, click the &quot;Clear&quot; button. As a result, the time series will become empty.
	g.	View the entered time series. The data is displayed in a text field in this window. If the number of values in a row does not exceed 2000, the row is displayed in its entirety. If the number of values exceeds 2000, only the first 1000 and the last 1000 values are displayed. If the number of values in the series is less than three, a message is displayed stating that this number of values is not enough to predict.
	h. Apply changes to the input data. To do this, click the &quot;Apply&quot; or &quot;cross&quot; button. If the data has been changed, the prediction results, the specified fuzzy sets and intervals are reset. The characteristics of the time series on the main screen are also recalculated: the minimum of the series, the maximum of the series, the average value of the series, the median of the series and the graph of the original (entered) numerical series is redrawn.
8) Open the help. To do this, click the &quot;Help&quot; button in the main menu.

If the entered time series has a length of at least three values, the following functions become available (previously available functions remain as such):
1) Setting intervals for predicting the original time series. To do this, click the &quot;Set intervals&quot; button on the main screen, as a result of which the &quot;Set intervals&quot; window will open, which provides the user with the following options:
	a. Set intervals for the original series. It is performed in the &quot;For source row&quot; tab. The task methods and information provided in the tab are described below.
	b. Setting intervals for a number of absolute values of the first differences. It is performed in the &quot;For the initial series&quot; tab and only when forecasting time series based on the description of fuzzy trends, otherwise the tab is inactive. The task methods and information provided in the tab are described below
	c. Apply the changes. To do this, click the &quot;Apply&quot; or &quot;cross&quot; button. If the data has been changed, the prediction results corresponding to the type of changed intervals (for the initial series or for a series of absolute values of the first differences), the specified fuzzy sets are reset
	d. Each of the tabs provides the user with the following options:
		i. Information about the maximum of the corresponding series
		ii.	Setting the offset to the right of the maximum value of the row to set the range of values. Field D2 for the tab &quot;For the initial series&quot; and field D for the tab &quot;For the series of absolute values of the first differences&quot;
		iii.	Choosing the method for setting intervals from the following list:
			1. Distribution-based length
			2. Average-based length
			3. Half of average-based
			4. Natural partition by 3-4-5 rules
			5. By the number of
		iv.	Setting the number of intervals to enter in the &quot;By number&quot; way
		v. Setting the intervals. The &quot;Enter intervals&quot; button
		vi. View the set intervals. The data is displayed in a text field in this window. If the number of intervals does not exceed 2000, they are displayed in their entirety. If the number of intervals exceeds 2000, only the first 1000 and the last 1000 intervals are displayed.
	e. Additionally, the &quot;For source row&quot; tab provides the following options:
		i. Information about the minimum of the corresponding row
		ii.	Setting the margin to the left of the minimum value of the row to set the range of values. Field D1.

2) Setting fuzzy sets to predict the initial time series. To do this, click the &quot;Set NM&quot; button on the main screen, as a result of which the &quot;Setting fuzzy sets&quot; window will open, which provides the user with the following options:
	a. Setting fuzzy sets for the source series. It is performed in the &quot;For source row&quot; tab. The task methods and information provided in the tab are described below.
	b. Setting fuzzy sets for a number of absolute values of the first differences. It is performed in the &quot;For the initial series&quot; tab and only when forecasting time series based on the description of fuzzy trends, otherwise the tab is inactive. The methods of setting and the information presented in the tab are described below.
	c. To set fuzzy sets of each type, it is necessary that the intervals of the corresponding type were previously set. Otherwise, the tab for setting this type of fuzzy sets will be unavailable.
	d. Apply the changes. To do this, click the &quot;Apply&quot; or &quot;cross&quot; button. If the data has been changed, the prediction results are reset
	e. Each of the tabs provides the user with the following options:
		i. Choose a way to automatically set fuzzy sets:
			1. Following Q. Song
			2. A &quot;smooth&quot; approach
		ii. Set fuzzy sets according to the selected method. To do this, click the &quot;Set NM&quot; button
		iii.	View fuzzy sets. The data is displayed in a text field in this window. If the number of fuzzy sets does not exceed 400, they are displayed in their entirety. If the number of fuzzy sets exceeds 400, only the first 200 and last 200 fuzzy sets are displayed. If the number of intervals does not exceed 400, the degrees of belonging to all intervals are displayed for each fuzzy set. If the number of intervals exceeds 400, only the degrees of belonging to the first 200 and last 200 intervals are displayed

If, in the case of forecasting fuzzy time series, fuzzy sets are set for the initial series, and in the case of forecasting time series based on the description of fuzzy trends, also for a number of absolute values of the first differences, the following functions become available (previously available functions remain so):
1) Choosing the defuzzification method. To do this, select the desired option from the &quot;Data defuzzification method&quot; list on the main screen:
	a. Following Q. Song
	b. Centroid method
2) Choosing a metric to evaluate accuracy. To do this, select the desired option from the &quot;Metric for accuracy assessment&quot; list on the main screen:
	a. MSE
	b. RMSE
	c. MAE
	d. MAPE
	e. MASE
3) Forecasting in accordance with the selected forecasting method and the specified settings. To do this, click the &quot;Predict&quot; button on the main screen. As a result, a forecasting model will be built and the values of the initial time series will be calculated in accordance with this model (on the basis of which the forecasting error will be determined), as well as one value going directly after the last value of the initial time series.

After clicking the &quot;Predict&quot; button, the following functions become available (previously available functions remain so):
1) View the prediction error calculated using the specified metric in the &quot;Prediction Error&quot; field on the main screen
2) View the predicted value in the &quot;Predicted value&quot; field on the main screen
3) Viewing a graph of predicted values of the original time series (color matching to the graph is indicated in the legend) on the main screen
4) View the continuation of the graph of the original time series to the predicted value on the main screen
5) Viewing the fuzzified data generated during forecasting. To do this, click the &quot;View NVR&quot; button on the main screen. As a result, the &quot;Fuzzified Data&quot; window will be opened, in which the relevant information will be indicated
6) View the progress of the program. To do this, click the &quot;View progress&quot; button on the main screen. As a result, the &quot;Progress&quot; window will open, in which the relevant information will be indicated
7) Viewing the predicted values. To do this, click the &quot;Prediction Results&quot; button on the main screen. As a result, the &quot;Forecasting Results&quot; window will be opened, in which the relevant information will be indicated
If any window is currently open other than the main screen, working with the main screen is not available.
When hovering over the interface elements, the program gives the user hints on how to work.
To finish working with the application, click the &quot;cross&quot; button of the main screen window.
</translation>
    </message>
    <message>
        <location filename="helpdialog.ui" line="104"/>
        <source>Закрыть</source>
        <translation>Close</translation>
    </message>
</context>
<context>
    <name>LoadDataWindow</name>
    <message>
        <location filename="loaddatawindow.ui" line="19"/>
        <source>Ввод данных</source>
        <translation>Input of data</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="163"/>
        <location filename="loaddatawindow.ui" line="166"/>
        <source>Применить</source>
        <translation>Apply</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="55"/>
        <source>Ввести числовой ряд из файла с указанными разделителями</source>
        <translation>Enter numeric time series from file with specified separators</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="58"/>
        <source>Ввести из файла</source>
        <translation>Load from file</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="107"/>
        <source>Новое значение:</source>
        <translation>New value:</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="121"/>
        <source>Добавить значение указанное в поле &quot;Новое значение&quot; (Enter)</source>
        <translation>Add value entered into field &quot;New value&quot;</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="124"/>
        <source>Добавить значение</source>
        <translation>Add value</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="127"/>
        <source>Return</source>
        <translation>Return</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="114"/>
        <source>Значение, которое будет добавлено в конец имеющегося временного ряда при нажатии кнопки &quot;Добавить значение&quot;</source>
        <translation>Value that will be added to the end of the current time series after button &quot;Add value&quot; is pressed</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="31"/>
        <source>Разделитель целой и дробной части:</source>
        <translation>The separator of the whole and fractional parts:</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="137"/>
        <source>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;meta charset=&quot;utf-8&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
hr { height: 1px; border-width: 0; }
li.unchecked::marker { content: &quot;\2610&quot;; }
li.checked::marker { content: &quot;\2612&quot;; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:&apos;Segoe UI&apos;; font-size:11pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;&quot;&gt;&lt;br /&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="155"/>
        <source>Очистить данные</source>
        <translation>Clear data</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="158"/>
        <source>Очистить</source>
        <translation>Clear</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="91"/>
        <source>Удалить последнее значение из числового ряда</source>
        <translation>Delete the last value from time series</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="94"/>
        <source>Удалить последнее</source>
        <translation>Delete last</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="38"/>
        <source>Символ, отделяющий целую часть числа от дробной</source>
        <translation>The symbol separating th whole and fractional parts of the value</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="42"/>
        <source>Точка</source>
        <translation>Dot</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="47"/>
        <source>Запятая</source>
        <translation>Comma</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="71"/>
        <source>Разделители между значениями:</source>
        <translation>Separators between values:</translation>
    </message>
    <message>
        <location filename="loaddatawindow.ui" line="78"/>
        <source>Набор символов за исключением пробела, табуляции и перевода строки, которые могут отделять значения числового ряда в файле друг от друга</source>
        <translation>Set of symbols except space, tab and line feed that can separate values of time series in file from each other</translation>
    </message>
</context>
<context>
    <name>LoadFS</name>
    <message>
        <location filename="loadfs.ui" line="19"/>
        <source>Задание нечётких множеств</source>
        <translation>Definition of fuzzy sets</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="35"/>
        <source>Для исходного ряда</source>
        <translation>For initial time series</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="38"/>
        <location filename="loadfs.ui" line="41"/>
        <source>Определение нечётких множеств для фаззификации исходного временного ряда (доступно только после задания соответствующих интервалов)</source>
        <translation>Definition of fuzzy sets for fuzzification of the initial time series (available only after setting the appropriate intervals)</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="53"/>
        <location filename="loadfs.ui" line="129"/>
        <source>Способ автоматического задания НМ:</source>
        <translation>Method for automatically defining FS:</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="77"/>
        <location filename="loadfs.ui" line="153"/>
        <source>Задать нечёткие множества при помощи выбранного способа</source>
        <translation>Define fuzzy sets using the selected method</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="80"/>
        <location filename="loadfs.ui" line="156"/>
        <source>Задать НМ</source>
        <translation>Define FS</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="60"/>
        <location filename="loadfs.ui" line="136"/>
        <source>Способ автоматического задания нечётких множеств</source>
        <translation>A method for automatically defining fuzzy sets</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="64"/>
        <location filename="loadfs.ui" line="140"/>
        <source>следуя Q. Song</source>
        <translation>according to Q. Song</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="69"/>
        <location filename="loadfs.ui" line="145"/>
        <source>&apos;плавный&apos; подход</source>
        <translation>&apos;smooth&apos; approach</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="90"/>
        <location filename="loadfs.ui" line="166"/>
        <source>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;meta charset=&quot;utf-8&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
hr { height: 1px; border-width: 0; }
li.unchecked::marker { content: &quot;\2610&quot;; }
li.checked::marker { content: &quot;\2612&quot;; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:&apos;Segoe UI&apos;; font-size:11pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;&quot;&gt;&lt;br /&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="111"/>
        <source>Для ряда абсолютных значений первых разностей</source>
        <translation>For time series of absolute values of the first differences</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="114"/>
        <location filename="loadfs.ui" line="117"/>
        <source>Определение нечётких множеств для фаззификации временного ряда абсолютных значений первых разностей исходного временного ряда (доступно только при прогнозировании временных рядов на основе описания нечётких тенденций и только после задания соответствующих интервалов)</source>
        <translation>Definition of fuzzy sets for fuzzification of a time series of absolute values of the first differences of the initial time series (available only when forecasting time series based on the description of fuzzy trends and only after setting the appropriate intervals)</translation>
    </message>
    <message>
        <location filename="loadfs.ui" line="187"/>
        <location filename="loadfs.ui" line="190"/>
        <source>Применить</source>
        <translation>Apply</translation>
    </message>
</context>
<context>
    <name>LoadIntervalsDialog</name>
    <message>
        <location filename="loadintervalsdialog.ui" line="19"/>
        <source>Задание интервалов</source>
        <translation>Definition of intervals</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="54"/>
        <source>Для исходного ряда</source>
        <translation>For initial time series</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="57"/>
        <location filename="loadintervalsdialog.ui" line="60"/>
        <source>Задание интервалов для определения нечётких множеств для фаззификации исходного временного ряда</source>
        <translation>Setting intervals to define fuzzy sets for fuzzification of the original time series</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="196"/>
        <source>Минимум ряда: </source>
        <translation>Series minimum: </translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="320"/>
        <location filename="loadintervalsdialog.ui" line="486"/>
        <source>Количество:</source>
        <translation>Number:</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="146"/>
        <source>Минимальное значение исходного числового ряда</source>
        <translation>Minimal value of the initial numeric time series</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="333"/>
        <location filename="loadintervalsdialog.ui" line="362"/>
        <source>Максимум ряда:</source>
        <translation>Series maximum:</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="275"/>
        <location filename="loadintervalsdialog.ui" line="422"/>
        <source>Способ задания интервалов</source>
        <translation>Intervals definition method</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="279"/>
        <location filename="loadintervalsdialog.ui" line="426"/>
        <source>distribution-based length</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="284"/>
        <location filename="loadintervalsdialog.ui" line="431"/>
        <source>average-based length</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="289"/>
        <location filename="loadintervalsdialog.ui" line="436"/>
        <source>half of avarage-based </source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="294"/>
        <location filename="loadintervalsdialog.ui" line="441"/>
        <source>natural partition by 3-4-5 rules</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="299"/>
        <location filename="loadintervalsdialog.ui" line="446"/>
        <source>by number</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="225"/>
        <location filename="loadintervalsdialog.ui" line="378"/>
        <source>Максимальное значение исходного числового ряда</source>
        <translation>Maximal value of the initial numeric time series</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="253"/>
        <location filename="loadintervalsdialog.ui" line="464"/>
        <source>Отступ вправо от максимума для задания области значений</source>
        <translation>Shift towards right from maximum to define the range of values</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="307"/>
        <source>D2:</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="209"/>
        <source>D1:</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="104"/>
        <source>Отступ влево от минимума для задания области значений</source>
        <translation>Shift towards left from minimum to define the range of values</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="72"/>
        <location filename="loadintervalsdialog.ui" line="512"/>
        <source>Задать интервалы указанным способом</source>
        <translation>Define intervals using the selected method</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="75"/>
        <location filename="loadintervalsdialog.ui" line="515"/>
        <source>Ввести интервалы</source>
        <translation>Define intervals</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="88"/>
        <location filename="loadintervalsdialog.ui" line="409"/>
        <source>Способ задания интервалов:</source>
        <translation>Intervals definition method:</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="123"/>
        <location filename="loadintervalsdialog.ui" line="525"/>
        <source>&lt;!DOCTYPE HTML PUBLIC &quot;-//W3C//DTD HTML 4.0//EN&quot; &quot;http://www.w3.org/TR/REC-html40/strict.dtd&quot;&gt;
&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;meta charset=&quot;utf-8&quot; /&gt;&lt;style type=&quot;text/css&quot;&gt;
p, li { white-space: pre-wrap; }
hr { height: 1px; border-width: 0; }
li.unchecked::marker { content: &quot;\2610&quot;; }
li.checked::marker { content: &quot;\2612&quot;; }
&lt;/style&gt;&lt;/head&gt;&lt;body style=&quot; font-family:&apos;Segoe UI&apos;; font-size:11pt; font-weight:400; font-style:normal;&quot;&gt;
&lt;p style=&quot;-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;&quot;&gt;&lt;br /&gt;&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="171"/>
        <location filename="loadintervalsdialog.ui" line="493"/>
        <source>Количество интервалов для задания способом &quot;by number&quot;</source>
        <translation>Number if intervals for definition using &quot;by number&quot; method</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="344"/>
        <source>Для ряда абсолютных значений первых разностей</source>
        <translation>For time series of absolute values of the first differences</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="347"/>
        <location filename="loadintervalsdialog.ui" line="350"/>
        <source>Задание интервалов для определения нечётких множеств для фаззификации временного ряда абсолютных значений первых разностей исходного временного ряда (доступно только при прогнозировании временных рядов на основе описания нечётких тенденций)</source>
        <translation>Setting intervals for determining fuzzy sets for fuzzification of the time series of the absolute values of the first differences of the original time series (available only when forecasting time series based on the description of fuzzy trends)</translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="454"/>
        <source>D:</source>
        <translation></translation>
    </message>
    <message>
        <location filename="loadintervalsdialog.ui" line="25"/>
        <location filename="loadintervalsdialog.ui" line="28"/>
        <source>Применить</source>
        <translation>Apply</translation>
    </message>
</context>
<context>
    <name>MainWindow</name>
    <message>
        <location filename="mainwindow.ui" line="19"/>
        <source>Программа прогнозирования НВР</source>
        <translation>FTS predict program</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="343"/>
        <source>Определение нечётких множеств</source>
        <translation>Definition of fuzzy sets</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="346"/>
        <source>Задать НМ</source>
        <translation>Define FS</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="250"/>
        <source>Задание интервалов для определения нечётких множеств</source>
        <translation>Assignment of intervals for definition of fuzzy sets</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="253"/>
        <source>Задать интервалы</source>
        <translation>Define intervals</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="147"/>
        <source>Загрузка исходного временного ряда</source>
        <translation>Loading of initial time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="156"/>
        <source>Загрузить данные</source>
        <translation>Load data</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="48"/>
        <source>Минимум ряда: </source>
        <translation>Series minimum: </translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="163"/>
        <source>Максимум ряда:</source>
        <translation>Series maximum:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="173"/>
        <source>Максимальное значение исходного числового ряда</source>
        <translation>Maximal value of the initial numeric time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="64"/>
        <source>Минимальное значение исходного числового ряда</source>
        <translation>Minimal value of the initial numeric time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="308"/>
        <source>Значение ошибки, вычисляемой при помощи указанной метрики, для истинных и предсказанных значений исходного ряда</source>
        <translation>Value of error calculated by means of specified metric for real and predicted values of initial time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="298"/>
        <source>Ошибка прогнозирования:</source>
        <translation>Prediction error:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="95"/>
        <source>Способ дефаззификации данных:</source>
        <translation>Defuzzification method:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="111"/>
        <source>Способ перевода данных из нечёткого представления в числовое</source>
        <translation>Method of converting data from fuzzy representation to numeric</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="115"/>
        <source>следуя Q. Song</source>
        <translation>according to Q. Song</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="120"/>
        <source>centroid method</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="192"/>
        <source>Метрика для оценки точности:</source>
        <translation>A metric for evaluating accuracy:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="202"/>
        <source>Метрика для оценки точности</source>
        <translation>A metric for evaluating accuracy</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="206"/>
        <source>MSE</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="211"/>
        <source>RMSE</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="216"/>
        <source>MAE</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="221"/>
        <source>MAPE</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="226"/>
        <source>MASE</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="137"/>
        <source>Спрогнозировать на 1 шаг (предварительно необходимо ввести данные, задать интервалы и определить нечёткие множества)</source>
        <translation>Predict by 1 step (preliminarily you should load data, define intervals and fuzzy sets)</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="140"/>
        <source>Спрогнозировать</source>
        <translation>Predict</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="330"/>
        <source>Просмотреть промежуточные вычисления</source>
        <translation>View trace</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="333"/>
        <source>Просмотреть ход выполнения</source>
        <translation>View trace</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="38"/>
        <location filename="mainwindow.ui" line="41"/>
        <source>Сделать заметку</source>
        <translation>Make note</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="416"/>
        <source>Спрогнозированный числовой временной ряд</source>
        <translation>Predicted fuzzy time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="419"/>
        <source>Результаты прогнозирования</source>
        <translation>Prediction results</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="237"/>
        <source>Просмотреть исходный ряд переведённый в нечёткое представление (фаззифицированный)</source>
        <translation>View the initial time series converted into a fuzzy representation (fuzzified)</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="240"/>
        <source>Просмотреть НВР</source>
        <translation>View FTS</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="266"/>
        <source>Среднее значение:</source>
        <translation>Mean:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="273"/>
        <source>Среднее арифметическое значений исходного числового ряда</source>
        <translation>Mean of initial time series values</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="364"/>
        <source>Медиана:</source>
        <translation>Median:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="371"/>
        <source>Медиана исходного числового ряда</source>
        <translation>Median of initial time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="390"/>
        <source>Спрогнозированное значение:</source>
        <translation>Predicted value:</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="451"/>
        <source>Файл</source>
        <translation>File</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="459"/>
        <location filename="mainwindow.ui" line="522"/>
        <source>Настройки</source>
        <translation>Settings</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="466"/>
        <source>Модель прогнозирования</source>
        <translation>Prediction model</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="476"/>
        <source>Язык / Language</source>
        <translation>Язык / Language</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="486"/>
        <location filename="mainwindow.ui" line="527"/>
        <source>Справка</source>
        <translation>Help</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="500"/>
        <source>Сохранить</source>
        <translation>Save</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="503"/>
        <source>Сохранить результаты работы (Ctrl + S)</source>
        <translation>Save work results (Ctrl + O)</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="506"/>
        <source>Ctrl+S</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="511"/>
        <source>Открыть</source>
        <translation>Open</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="514"/>
        <source>Открыть ранее сохранённые результаты работы (Ctrl + O)</source>
        <translation>Open previously saved work results (Ctrl + O)</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="517"/>
        <source>Ctrl+O</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="530"/>
        <source>F1</source>
        <translation>F1</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="535"/>
        <source>Сохранить как</source>
        <translation>Save as</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="538"/>
        <source>Сохранить результаты работы как (Ctrl + Shift + S)</source>
        <oldsource>Сохранить резыльтаты работы как (Ctrl + Shift + S)</oldsource>
        <translation>Save work results as (Ctrl + Shift + O)</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="541"/>
        <source>Ctrl+Shift+S</source>
        <translation></translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="552"/>
        <source>Прогнозирование НВР</source>
        <translation>FTS prediction</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="555"/>
        <source>Прогнозирование нечётких временных рядов</source>
        <translation>Prediction of fuzzy time series</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="563"/>
        <source>Прогнозирование ВР на основе описания нечётких тенденций</source>
        <translation>Forecasting BP based on the description of fuzzy trendencies</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="566"/>
        <source>Прогнозирование временных рядов на основе описания нечётких тенденций</source>
        <translation>Forecasting time series based on the description of fuzzy trendencies</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="577"/>
        <source>Русский</source>
        <translation>Русский</translation>
    </message>
    <message>
        <location filename="mainwindow.ui" line="585"/>
        <source>English</source>
        <translation></translation>
    </message>
</context>
<context>
    <name>MakeNoteWindow</name>
    <message>
        <location filename="makenotewindow.ui" line="19"/>
        <source>Заметка</source>
        <translation>Note</translation>
    </message>
    <message>
        <location filename="makenotewindow.ui" line="28"/>
        <source>Сохранить заметку</source>
        <translation>Save note</translation>
    </message>
    <message>
        <location filename="makenotewindow.ui" line="31"/>
        <source>Сохранить</source>
        <translation>Save</translation>
    </message>
    <message>
        <location filename="makenotewindow.ui" line="34"/>
        <source>Return</source>
        <translation></translation>
    </message>
</context>
<context>
    <name>ShowDataDialog</name>
    <message>
        <location filename="showdatadialog.ui" line="19"/>
        <source>Dialog</source>
        <translation></translation>
    </message>
    <message>
        <location filename="showdatadialog.ui" line="35"/>
        <location filename="showdatadialog.ui" line="38"/>
        <source>Закрыть</source>
        <translation>Close</translation>
    </message>
</context>
</TS>
