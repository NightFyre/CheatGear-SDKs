#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_RadialMenuComms.BP_RadialMenuComms_C
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class UBP_RadialMenuComms_C : public UBP_RadialMenuBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Construct();
		void SendCommsCommand(ERadialMenuDirection Direction);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnTeamChanged(unsigned char TeamId, class ATeamInfo* TeamInfo);
		void ExecuteUbergraph_BP_RadialMenuComms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
