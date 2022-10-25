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
	 * WidgetBlueprintGeneratedClass WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C
	 * Size -> 0x0358 (FullSize[0x05B8] - InheritedSize[0x0260])
	 */
	class UWBP_NetworkFailureOverlay_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Ok;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ErrorMessage;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_ErrorTitle;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Type;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Messages;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ENetworkFailure                                            LastNetworkFailureType;                                  // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_VCAZ[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastNetworkErrorMessage;                                 // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                NetDriverAlreadyExists;                                  // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NetDriverCreateFailure;                                  // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NetDriverListenFailure;                                  // 0x02E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConnectionLost;                                          // 0x02F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConnectionTimedOut;                                      // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                FailureReceived;                                         // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OutdatedClient;                                          // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NotNetworkCompatible;                                    // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                GenericReason;                                           // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ServerFullTitle;                                         // 0x0388(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ServerFullMessage;                                       // 0x03A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ServerPasswordTitle;                                     // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PasswordRequired;                                        // 0x03D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                WrongPassword;                                           // 0x03E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NetGuidMismatch;                                         // 0x0400(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NetChecksumMismatch;                                     // 0x0418(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              ErrorString;                                             // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              MessageString;                                           // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                BannedTitle;                                             // 0x0450(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BannedMessage;                                           // 0x0468(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PermanentBan;                                            // 0x0480(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                KickedTitle;                                             // 0x0498(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoSteamIdTitle;                                          // 0x04B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoSteamIdMessage;                                        // 0x04C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConnectionFailed;                                        // 0x04E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PendingConnectionFailureUnknown;                         // 0x04F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TimeoutSuggestion;                                       // 0x0510(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PendingConnectionFailureWithError;                       // 0x0528(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ErrorStringProvided;                                     // 0x0540(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AdminNeededSlotTitle;                                    // 0x0558(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AdminNeededSlotNessage;                                  // 0x0570(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MaxPlayerCountChangedTitle;                              // 0x0588(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MaxPlayerCountChangedMessage;                            // 0x05A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature();
		void RemoveLoadingScreen();
		void SetupFromErrorString();
		void SetupFromNetworkFailureType();
		void ExecuteUbergraph_WBP_NetworkFailureOverlay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
