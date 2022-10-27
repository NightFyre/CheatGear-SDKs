#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_WristWatch_Modular.BP_WristWatch_Modular_C
	 * Size -> 0x001C (FullSize[0x040C] - InheritedSize[0x03F0])
	 */
	class ABP_WristWatch_Modular_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                S_Watch_NewSkel;                                         // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      NonPlayerWatchRedrawInterval;                            // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnLoaded_ACB25BB1431690D222BD5B836B55DB38(class UClass* Loaded);
		void OnBecomeViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character);
		void OnEndViewTarget_Event_1(class APlayerController* PlayerController, class AGBCharacter* Character);
		void OnReceivePlayerState_Event_1(class APlayerState* PlayerState);
		void OnAddedToItem(class AGBItem* NewParentItem);
		void ExecuteUbergraph_BP_WristWatch_Modular(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
