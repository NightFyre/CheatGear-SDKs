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
	 * Class RamaMeleePlugin.RamaMeleeCore
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URamaMeleeCore : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RamaMeleePlugin.RamaMeleeWeapon
	 * Size -> 0x0070 (FullSize[0x0F40] - InheritedSize[0x0ED0])
	 */
	class URamaMeleeWeapon : public USkeletalMeshComponent
	{
	public:
		TArray<EObjectTypeQuery>                                   MeleeTraceObjectTypes;                                   // 0x0ED0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RamaMeleeWeapon_OnHit;                                   // 0x0EE0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       DrawShapes;                                              // 0x0EF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawSweeps;                                              // 0x0EF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawLines;                                               // 0x0EF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VEY[0x1];                                   // 0x0EF3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawShapes_Thickness;                                    // 0x0EF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawShapes_Duration;                                     // 0x0EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerformDeepTrace;                                        // 0x0EFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DeepTrace_SingleBodyMode;                                // 0x0EFD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9W7[0x2];                                   // 0x0EFE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRamaMeleeDamageMap                                 DamageMap;                                               // 0x0F00(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseMultiTrace;                                          // 0x0F10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RMS[0x7];                                   // 0x0F11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                   SurfaceTypesToIgnore;                                    // 0x0F18(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DoingSwingTraces;                                        // 0x0F28(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVPI[0x17];                                  // 0x0F29(0x0017) MISSED OFFSET (PADDING)

	public:
		void UpdateSwingPoseBodies();
		void StopSwingDamage();
		void StartSwingDamage();
		bool MeleeSweep(struct FHitResult* Hit, TArray<struct FTransform> BodyPreviousPose);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
