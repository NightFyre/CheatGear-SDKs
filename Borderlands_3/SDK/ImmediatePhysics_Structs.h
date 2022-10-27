#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ImmediatePhysics.ESimulationSpace
	 */
	enum class ESimulationSpace : uint8_t
	{
		ComponentSpace = 0,
		WorldSpace     = 1,
		BaseBoneSpace  = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ImmediatePhysics.AnimNode_RigidBody
	 * Size -> 0x0480 (FullSize[0x05C0] - InheritedSize[0x0140])
	 */
	struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
	{
	public:
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OverrideWorldGravity;                                    // 0x0148(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0154(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0160(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x016C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0178(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWorldGeometry;                                    // 0x0185(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU6V[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESimulationSpace                                           SimulationSpace;                                         // 0x0188(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGWO[0x3];                                   // 0x0189(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_LVL6[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BaseBoneRef;                                             // 0x0190(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideWorldGravity;                                   // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRUU[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedBoundsScale;                                       // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransferBoneVelocities;                                 // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeIncomingPoseOnStart;                              // 0x01B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComponentSpaceSimulation;                               // 0x01B2(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JIO1[0x40D];                                 // 0x01B3(0x040D) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
