#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BaseProgressBar.BaseProgressBar_C
	 * Size -> 0x002D (FullSize[0x02E5] - InheritedSize[0x02B8])
	 */
	class UBaseProgressBar_C : public UWindowsContent_C
	{
	public:
		class FText                                                _titleBase;                                              // 0x02B8(0x0018) Edit, BlueprintVisible
		float                                                      _percentage;                                             // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      _previousPercentage;                                     // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _alarmThreshold;                                         // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _isClampingOn;                                           // 0x02DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _isAlarmOn;                                              // 0x02DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJX3[0x2];                                   // 0x02DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _alarmThresholdHigh;                                     // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _isAlarmThresholdHighActive;                             // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PercentageToUITextWOPercSign(float Value, class FText* percentageString);
		void GetAlarmThresholdHigh(float* alarmThreshold);
		void SetAlarmThresholdHigh(float alarmThreshold);
		void CheckAlarmThresholdHigh(bool* shouldAlarmBeOn);
		void SetAlarmThresholdHighActive(bool shouldBeActive);
		void GetIsAlarmOn(bool* isAlarmOn);
		void PercentageToUIText(float Value, class FText* percentageString);
		void SetClamping(bool shouldEnableClamping);
		void PercentageToText(float Value, class FText* PercentageText);
		void GetPreviousPercentage(float* prevPercentage);
		void CheckAlarmThreshold(bool* shouldAlarmBeOn);
		void AlarmSwitchOn();
		void AlarmSwitchOff();
		void GetAlarmThreshold(float* alarmThreshold);
		void SetAlarmThreshold(float alarmThreshold);
		void PercentageToString(float Value, class FString* percentageString);
		void PercentageToInt(float Value, int32_t* percentageInt);
		void SetPreviousPercentage(float previousPercentage);
		void SavePercentageAsPrevious();
		void OnPercentageChanged();
		void SetTitleBase(const class FText& Title);
		void GetTitleBase(class FText* Title);
		void IncreasePercentage(float IncreasePercentage);
		void DecreasePercentage(float DecreasePercentage);
		void SetPercentage(float percentInputToSet);
		void GetPercentage(float* Percentage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
