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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StatsCollector.FloatDataItem
	 * Size -> 0x0028
	 */
	struct FFloatDataItem
	{
	public:
		class FString                                              ShortName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvgValue;                                                // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurValue;                                                // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequenceTimeMin;                                         // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequenceTimeMax;                                         // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct StatsCollector.IntDataItem
	 * Size -> 0x0040
	 */
	struct FIntDataItem
	{
	public:
		class FString                                              ShortName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    MinValue;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvgValue;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYV4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    MaxValue;                                                // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CurValue;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequenceTimeMin;                                         // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SequenceTimeMax;                                         // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMemory;                                               // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2RQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
