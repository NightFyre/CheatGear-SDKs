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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemMessage
	 * Size -> 0x0028
	 */
	struct FDrawDebugItemMessage
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVQ0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FColor                                              Colour;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSID[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemSphere
	 * Size -> 0x0020
	 */
	struct FDrawDebugItemSphere
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IPLY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CentrePos;                                               // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              Colour;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemBox
	 * Size -> 0x0050
	 */
	struct FDrawDebugItemBox
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FOIX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CentrePos;                                               // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Box;                                                     // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUQF[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0030(0x0010) IsPlainOldData, NoDestructor
		struct FColor                                              Colour;                                                  // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PRD1[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemCapsule
	 * Size -> 0x0040
	 */
	struct FDrawDebugItemCapsule
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WV4J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CentrePos;                                               // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      HalfHeight;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               Rotation;                                                // 0x0020(0x0010) IsPlainOldData, NoDestructor
		struct FColor                                              Colour;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VX93[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemLine
	 * Size -> 0x002C
	 */
	struct FDrawDebugItemLine
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QRTH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LineStart;                                               // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LineEnd;                                                 // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FColor                                              Colour;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemSector
	 * Size -> 0x0048
	 */
	struct FDrawDebugItemSector
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8S7Y[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotationAngle;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Centre;                                                  // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SectorAngle;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              Colour;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ZeroAngleVector;                                         // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RotationAxis;                                            // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SubAngles;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Thickness;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaDebug.DrawDebugItemString
	 * Size -> 0x0030
	 */
	struct FDrawDebugItemString
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplaceInGroup;                                          // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_STNW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              String;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FColor                                              Colour;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             StringPos;                                               // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaDebug.SphereData
	 * Size -> 0x0018
	 */
	struct FSphereData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Segments;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              Colour;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
