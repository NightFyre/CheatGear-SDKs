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
	 * DynamicClass AudioComponentSplineFollower.AudioComponentSplineFollower_C
	 * Size -> 0x00C0 (FullSize[0x02E0] - InheritedSize[0x0220])
	 */
	class AAudioComponentSplineFollower_C : public AActor
	{
	public:
		class UINSAudioComponent*                                  INSAudio;                                                // 0x0220(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    Spline;                                                  // 0x0228(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       LoopEvent;                                               // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Debug;                                                   // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEBC[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Temp_name_Variable;                                      // 0x023C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0244(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          CallFunc_K2_SetWorldLocation_SweepHitResult;             // 0x0248(0x0088) Transient, DuplicateTransient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class AINSGameState*                                       K2Node_DynamicCast_AsINSGame_State;                      // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x02D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BDF[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		void ReceiveTick(float bpp__DeltaSeconds__pf);
		void ReceiveBeginPlay();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
