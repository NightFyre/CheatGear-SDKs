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
	 * WidgetBlueprintGeneratedClass BP_ObjectiveBriefing.BP_ObjectiveBriefing_C
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class UBP_ObjectiveBriefing_C : public UObjectiveBriefing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class UUserWidget* DoCreateDestructibleObjectiveIcon();
		class UUserWidget* DoCreateCapturingObjectiveIcon();
		void NotifyNewObjective();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_BP_ObjectiveBriefing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
