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
	 * WidgetBlueprintGeneratedClass WBP_VOIPUserManager.WBP_VOIPUserManager_C
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UWBP_VOIPUserManager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VerticalBox_UserList;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void RemoveVOIPUser(class AGBPlayerState* PlayerState);
		void FindOrAddVOIPUser(class AGBPlayerState* PlayerState, bool bIsRadio, class UWBP_VOIPUser_C** OutVOIPUser);
		void Construct();
		void OnPlayerControllerStateChanged_Event_1(const class FName& OldState, const class FName& NewState);
		void Update();
		void OnPlayerReadyRoomStatusChanged_Event_1(class AGBPlayerState* PlayerState);
		void OnVOIPEvent_Event_1(class AGBPlayerState* PlayerState, bool bIsTalking, bool bWasRadio);
		void ExecuteUbergraph_WBP_VOIPUserManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
