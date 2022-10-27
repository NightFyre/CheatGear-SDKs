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
	 * WidgetBlueprintGeneratedClass MonitoredWindowsContent.MonitoredWindowsContent_C
	 * Size -> 0x0040 (FullSize[0x02F8] - InheritedSize[0x02B8])
	 */
	class UMonitoredWindowsContent_C : public UWindowsContent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APrisoner*                                           _prisoner;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _isPrisonerSet;                                          // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3I76[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        _updateContentTimer;                                     // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       HasToolTip;                                              // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YTSU[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ToolTip;                                                 // 0x02E0(0x0018) Edit, BlueprintVisible

	public:
		void GetUpdateContentTimer(struct FTimerHandle* updateContentTimer);
		void IsBCUDataInitialized(bool* IsBCUDataInitialized);
		void NotifyParentOnAlarmSwitchedOff();
		void NotifyParentOnAlarmRaised();
		void IsPrisonerLifeComponentValid(bool* isLifeComponentValid);
		void GetPrisoner(class APrisoner** Prisoner);
		void SetDefaultPrisonerToMonitor(bool* Success);
		void SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success);
		void GetDefaultPrisoner(class APrisoner** Prisoner);
		void OnPrisonerSet();
		void UpdateContent();
		void Construct();
		void ExecuteUbergraph_MonitoredWindowsContent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
