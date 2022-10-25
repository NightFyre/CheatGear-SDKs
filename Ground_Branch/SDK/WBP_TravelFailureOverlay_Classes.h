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
	 * WidgetBlueprintGeneratedClass WBP_TravelFailureOverlay.WBP_TravelFailureOverlay_C
	 * Size -> 0x0120 (FullSize[0x0380] - InheritedSize[0x0260])
	 */
	class UWBP_TravelFailureOverlay_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Ok;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ErrorTitle;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Type;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Messages;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ETravelFailure                                             LastTravelFailureType;                                   // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_LJWG[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastTravelErrorMessage;                                  // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                MessageText;                                             // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LoadMapFailure;                                          // 0x02C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoLevel;                                                 // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoLevelWithInfo;                                         // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PackageMissing;                                          // 0x0308(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PackageMissingDownloadFrom;                              // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PendingNetGameCreateFailure;                             // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ServerTravelFailure;                                     // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ClientTravelFailure;                                     // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature();
		void RemoveLoadingScreen();
		void Construct();
		void CheckPackageMissingURL();
		void CheckNoLevel();
		void ExecuteUbergraph_WBP_TravelFailureOverlay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
