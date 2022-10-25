#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class GameplayDebugger.GameplayDebuggingComponent
	 * Size -> 0x0230 (FullSize[0x07E8] - InheritedSize[0x05B8])
	 */
	class UGameplayDebuggingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_W5IM[0x8];                                   // 0x05B8(0x0008) Fix Super Size
		class FString                                              DebugComponentClassName;                                 // 0x05C0(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash
		int32_t                                                    ShowExtendedInformatiomCounter;                          // 0x05D0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UQPG[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ReplicateViewDataCounters;                               // 0x05D8(0x0010) Net, ZeroConstructor
		class FString                                              ControllerName;                                          // 0x05E8(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PawnName;                                                // 0x05F8(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PawnClass;                                               // 0x0608(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DebugIcon;                                               // 0x0618(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              MovementBaseInfo;                                        // 0x0628(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              MovementModeInfo;                                        // 0x0638(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PathFollowingInfo;                                       // 0x0648(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CurrentAITask;                                           // 0x0658(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CurrentAIState;                                          // 0x0668(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CurrentAIAssets;                                         // 0x0678(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              GameplayTasksState;                                      // 0x0688(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              NavDataInfo;                                             // 0x0698(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              AbilityInfo;                                             // 0x06A8(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              MontageInfo;                                             // 0x06B8(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BrainComponentName;                                      // 0x06C8(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BrainComponentString;                                    // 0x06D8(0x0010) Net, ZeroConstructor, HasGetValueTypeHash
		TArray<unsigned char>                                      BlackboardRepData;                                       // 0x06E8(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_FYTO[0x10];                                  // 0x06F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     PathPoints;                                              // 0x0708(0x0010) Net, ZeroConstructor
		TArray<unsigned char>                                      PathCorridorData;                                        // 0x0718(0x0010) Net, ZeroConstructor, RepNotify
		unsigned char                                              UnknownData_TIY7[0x10];                                  // 0x0728(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      NavmeshRepData;                                          // 0x0738(0x0010) Net, ZeroConstructor, RepNotify
		TArray<unsigned char>                                      EQSRepData;                                              // 0x0748(0x0010) Net, ZeroConstructor, RepNotify
		struct FVector                                             SensingComponentLocation;                                // 0x0758(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NextPathPointIndex;                                      // 0x0764(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              bIsUsingPathFollowing : 1;                               // 0x0768(0x0001) BIT_FIELD Net, NoDestructor
		unsigned char                                              bIsUsingCharacter : 1;                                   // 0x0768(0x0001) BIT_FIELD Net, NoDestructor
		unsigned char                                              bIsUsingBehaviorTree : 1;                                // 0x0768(0x0001) BIT_FIELD Net, NoDestructor
		unsigned char                                              bIsUsingAbilities : 1;                                   // 0x0768(0x0001) BIT_FIELD Net, NoDestructor
		unsigned char                                              UnknownData_6DL1[0x7];                                   // 0x0769(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetActor;                                             // 0x0770(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NQGM[0x70];                                  // 0x0778(0x0070) Fix size for supers

	public:
		void ServerReplicateData(uint32_t InMessage, uint32_t DataView);
		void ServerDiscardNavmeshData();
		void ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation);
		void OnRep_UpdateNavmesh();
		void OnRep_UpdateEQS();
		void OnRep_UpdateBlackboard();
		void OnRep_PathCorridorData();
		void OnCycleDetailsView();
		void ClientEnableTargetSelection(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggingHUDComponent
	 * Size -> 0x00F0 (FullSize[0x04B8] - InheritedSize[0x03C8])
	 */
	class AGameplayDebuggingHUDComponent : public AActor
	{
	public:
		float                                                      MenuStartX;                                              // 0x03C8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MenuStartY;                                              // 0x03CC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebugInfoStartX;                                         // 0x03D0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebugInfoStartY;                                         // 0x03D4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCanvas*                                             Canvas;                                                  // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class APlayerController*                                   PlayerOwner;                                             // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_BYWP[0xD0];                                  // 0x03E8(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggerSettings
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UGameplayDebuggerSettings : public UObject
	{
	public:
		struct FGDTCustomViewNames                                 CustomViewNames;                                         // 0x0028(0x0050) Edit, Config, Protected
		bool                                                       OverHead;                                                // 0x0078(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       Basic;                                                   // 0x0079(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       BehaviorTree;                                            // 0x007A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       EQS;                                                     // 0x007B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       EnableEQSOnHUD;                                          // 0x007C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_91EU[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActiveEQSIndex;                                          // 0x0080(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       Perception;                                              // 0x0084(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       GameView1;                                               // 0x0085(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       GameView2;                                               // 0x0086(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       GameView3;                                               // 0x0087(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       GameView4;                                               // 0x0088(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		bool                                                       GameView5;                                               // 0x0089(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_LVLM[0x1E];                                  // 0x008A(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggingControllerComponent
	 * Size -> 0x02A0 (FullSize[0x0368] - InheritedSize[0x00C8])
	 */
	class UGameplayDebuggingControllerComponent : public UActorComponent
	{
	public:
		class AGameplayDebuggingHUDComponent*                      OnDebugAIHUD;                                            // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class AActor*                                              DebugAITargetActor;                                      // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UInputComponent*                                     AIDebugViewInputComponent;                               // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UInputComponent*                                     DebugCameraInputComponent;                               // 0x00E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_BH8N[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         ActivationKey;                                           // 0x0110(0x0028) Config
		struct FInputChord                                         CategoryZeroBind;                                        // 0x0138(0x0028) Config
		struct FInputChord                                         CategoryOneBind;                                         // 0x0160(0x0028) Config
		struct FInputChord                                         CategoryTwoBind;                                         // 0x0188(0x0028) Config
		struct FInputChord                                         CategoryThreeBind;                                       // 0x01B0(0x0028) Config
		struct FInputChord                                         CategoryFourBind;                                        // 0x01D8(0x0028) Config
		struct FInputChord                                         CategoryFiveBind;                                        // 0x0200(0x0028) Config
		struct FInputChord                                         CategorySixBind;                                         // 0x0228(0x0028) Config
		struct FInputChord                                         CategorySevenBind;                                       // 0x0250(0x0028) Config
		struct FInputChord                                         CategoryEightBind;                                       // 0x0278(0x0028) Config
		struct FInputChord                                         CategoryNineBind;                                        // 0x02A0(0x0028) Config
		struct FInputChord                                         CycleDetailsViewBind;                                    // 0x02C8(0x0028) Config
		struct FInputChord                                         DebugCameraBind;                                         // 0x02F0(0x0028) Config
		struct FInputChord                                         OnScreenDebugMessagesBind;                               // 0x0318(0x0028) Config
		struct FInputChord                                         GameHUDBind;                                             // 0x0340(0x0028) Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GaneplayDebuggerProxyHUD
	 * Size -> 0x0030 (FullSize[0x04F0] - InheritedSize[0x04C0])
	 */
	class AGaneplayDebuggerProxyHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_3EHE[0x30];                                  // 0x04C0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggingReplicator
	 * Size -> 0x00B0 (FullSize[0x0478] - InheritedSize[0x03C8])
	 */
	class AGameplayDebuggingReplicator : public AActor
	{
	public:
		class FString                                              DebugComponentClassName;                                 // 0x03C8(0x0010) ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              DebugComponentHUDClassName;                              // 0x03D8(0x0010) ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              DebugComponentControllerClassName;                       // 0x03E8(0x0010) ZeroConstructor, Config, HasGetValueTypeHash
		int32_t                                                    MaxEQSQueries;                                           // 0x03F8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7KJ5[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayDebuggingComponent*                         DebugComponent;                                          // 0x0400(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerController*                                   LocalPlayerOwner;                                        // 0x0408(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastSelectedActorToDebug;                                // 0x0410(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsGlobalInWorld;                                        // 0x0418(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       bAutoActivate;                                           // 0x0419(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       OverHead;                                                // 0x041A(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       Basic;                                                   // 0x041B(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       BehaviorTree;                                            // 0x041C(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       EQS;                                                     // 0x041D(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       EnableEQSOnHUD;                                          // 0x041E(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L413[0x1];                                   // 0x041F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ActiveEQSIndex;                                          // 0x0420(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Perception;                                              // 0x0424(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       GameView1;                                               // 0x0425(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       GameView2;                                               // 0x0426(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       GameView3;                                               // 0x0427(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       GameView4;                                               // 0x0428(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		bool                                                       GameView5;                                               // 0x0429(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LVHF[0x4E];                                  // 0x042A(0x004E) MISSED OFFSET (PADDING)

	public:
		void ServerSetActorToDebug(class AActor* InActor);
		void ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
		void OnRep_AutoActivate();
		void ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
		void ClientEnableTargetSelection(bool bEnable, class APlayerController* Context);
		void ClientAutoActivate();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
