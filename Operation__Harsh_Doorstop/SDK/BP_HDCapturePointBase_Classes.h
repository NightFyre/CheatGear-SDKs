#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDCapturePointBase.BP_HDCapturePointBase_C
	 * Size -> 0x0048 (FullSize[0x0398] - InheritedSize[0x0350])
	 */
	class ABP_HDCapturePointBase_C : public AHDBaseCapturePoint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    IconWidget;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebug;                                                  // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugFlagClothLOD;                                      // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bOnlyShowDebugIfActive;                                  // 0x0362(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OT4T[0x5];                                   // 0x0363(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDFMinimap*                                          Minimap;                                                 // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowIconWidget;                                         // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NW6C[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCaptureStatusUpdated;                                  // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AHDPlayerController*                                 LocalPC;                                                 // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNavigationInvokerComponent*                         NavInvoker;                                              // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateFlagClothLOD();
		void AddPOI();
		void RemovePOI();
		void UpdatePOIState();
		void InitPOI(class UDFMinimap* Minimap);
		void UpdateFlagIcon(EHDTeam InOwningTeam, class AHUD* InLocalPlayerHUD);
		void UpdateFlagColor(EHDTeam InOwningTeam);
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam);
		void ReceiveOnCaptureProgress(bool bNewContested);
		void OnCaptureUpdate(bool bContested, int32_t Progress);
		void ReceiveOnActive(bool bNewActive);
		void ReceiveOnLocked(bool bNewLocked);
		void ReceiveBeginPlay();
		void ReceiveOnTeamCaptureStatusUpdated();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_HDCapturePointBase(int32_t EntryPoint);
		void OnCaptureStatusUpdated__DelegateSignature(class ABP_HDCapturePointBase_C* ControlPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
