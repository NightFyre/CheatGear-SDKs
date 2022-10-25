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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum CoreUObject.EInterpCurveMode
	 */
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear           = 0,
		CIM_CurveAuto        = 1,
		CIM_Constant         = 2,
		CIM_CurveUser        = 3,
		CIM_CurveBreak       = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX              = 6
	};

	/**
	 * Enum CoreUObject.ERangeBoundTypes
	 */
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open      = 2,
		MAX       = 3
	};

	/**
	 * Enum CoreUObject.EUnit
	 */
	enum class EUnit : uint8_t
	{
		Micrometers          = 0,
		Millimeters          = 1,
		Centimeters          = 2,
		Meters               = 3,
		Kilometers           = 4,
		Inches               = 5,
		Feet                 = 6,
		Yards                = 7,
		Miles                = 8,
		Lightyears           = 9,
		Degrees              = 10,
		Radians              = 11,
		MetersPerSecond      = 12,
		KilometersPerHour    = 13,
		MilesPerHour         = 14,
		Celsius              = 15,
		Farenheit            = 16,
		Kelvin               = 17,
		Micrograms           = 18,
		Milligrams           = 19,
		Grams                = 20,
		Kilograms            = 21,
		MetricTons           = 22,
		Ounces               = 23,
		Pounds               = 24,
		Stones               = 25,
		Newtons              = 26,
		PoundsForce          = 27,
		KilogramsForce       = 28,
		Hertz                = 29,
		Kilohertz            = 30,
		Megahertz            = 31,
		Gigahertz            = 32,
		RevolutionsPerMinute = 33,
		Bytes                = 34,
		Kilobytes            = 35,
		Megabytes            = 36,
		Gigabytes            = 37,
		Terabytes            = 38,
		Lumens               = 39,
		Milliseconds         = 40,
		Seconds              = 41,
		Minutes              = 42,
		Hours                = 43,
		Days                 = 44,
		Months               = 45,
		Years                = 46,
		Unspecified          = 47,
		MAX                  = 48
	};

	/**
	 * Enum CoreUObject.EMouseCursor
	 */
	enum class EMouseCursor : uint8_t
	{
		None            = 0,
		Default         = 1,
		TextEditBeam    = 2,
		ResizeLeftRight = 3,
		ResizeUpDown    = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross   = 7,
		Crosshairs      = 8,
		Hand            = 9,
		GrabHand        = 10,
		GrabHandClosed  = 11,
		SlashedCircle   = 12,
		EyeDropper      = 13,
		MAX             = 14
	};

	/**
	 * Enum CoreUObject.EPixelFormat
	 */
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown              = 0,
		PF_A32B32G32R32F        = 1,
		PF_B8G8R8A8             = 2,
		PF_G8                   = 3,
		PF_G16                  = 4,
		PF_DXT1                 = 5,
		PF_DXT3                 = 6,
		PF_DXT5                 = 7,
		PF_UYVY                 = 8,
		PF_FloatRGB             = 9,
		PF_FloatRGBA            = 10,
		PF_DepthStencil         = 11,
		PF_ShadowDepth          = 12,
		PF_R32_FLOAT            = 13,
		PF_G16R16               = 14,
		PF_G16R16F              = 15,
		PF_G16R16F_FILTER       = 16,
		PF_G32R32F              = 17,
		PF_A2B10G10R10          = 18,
		PF_A16B16G16R16         = 19,
		PF_D24                  = 20,
		PF_R16F                 = 21,
		PF_R16F_FILTER          = 22,
		PF_BC5                  = 23,
		PF_V8U8                 = 24,
		PF_A1                   = 25,
		PF_FloatR11G11B10       = 26,
		PF_A8                   = 27,
		PF_R32_UINT             = 28,
		PF_R32_SINT             = 29,
		PF_PVRTC2               = 30,
		PF_PVRTC4               = 31,
		PF_R16_UINT             = 32,
		PF_R16_SINT             = 33,
		PF_R16G16B16A16_UINT    = 34,
		PF_R16G16B16A16_SINT    = 35,
		PF_R5G6B5_UNORM         = 36,
		PF_R8G8B8A8             = 37,
		PF_A8R8G8B8             = 38,
		PF_BC4                  = 39,
		PF_R8G8                 = 40,
		PF_ATC_RGB              = 41,
		PF_ATC_RGBA_E           = 42,
		PF_ATC_RGBA_I           = 43,
		PF_X24_G8               = 44,
		PF_ETC1                 = 45,
		PF_ETC2_RGB             = 46,
		PF_ETC2_RGBA            = 47,
		PF_R32G32B32A32_UINT    = 48,
		PF_R16G16_UINT          = 49,
		PF_ASTC_4x4             = 50,
		PF_ASTC_6x6             = 51,
		PF_ASTC_8x8             = 52,
		PF_ASTC_10x10           = 53,
		PF_ASTC_12x12           = 54,
		PF_BC6H                 = 55,
		PF_BC7                  = 56,
		PF_A16B16G16R16F_FILTER = 57,
		PF_BC6H_SF16            = 58,
		PF_BC6H_UF16            = 59,
		PF_R32G32_SINT          = 60,
		PF_Stencil              = 61,
		PF_Depth                = 62,
		PF_R32G32_UINT          = 63,
		PF_NV12                 = 64,
		_PF_MAX_                = 65
	};

	/**
	 * Enum CoreUObject.EAxis
	 */
	enum class EAxis : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		MAX  = 4
	};

	/**
	 * Enum CoreUObject.ELogTimes
	 */
	enum class ELogTimes : uint8_t
	{
		None            = 0,
		UTC             = 1,
		SinceGStartTime = 2,
		MAX             = 3
	};

	/**
	 * Enum CoreUObject.ESearchDir
	 */
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd   = 1,
		MAX       = 2
	};

	/**
	 * Enum CoreUObject.ESearchCase
	 */
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase    = 1,
		MAX           = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoreUObject.Guid
	 * Size -> 0x0010
	 */
	struct FGuid
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    B;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    C;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    D;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Rotator
	 * Size -> 0x000C
	 */
	struct FRotator
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Yaw;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Roll;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		FRotator();
		FRotator(float pitch, float yaw, float roll);
		FRotator operator +(const FRotator& other) const;
		FRotator operator -(const FRotator& other) const;
		FRotator operator *(float scalar) const;
		FRotator operator *(const FRotator& other) const;
		FRotator operator /(float scalar) const;
		FRotator operator /(const FRotator& other) const;
		FRotator& operator =(const FRotator& other);
		FRotator& operator +=(const FRotator& other);
		FRotator& operator -=(const FRotator& other);
		FRotator& operator *=(const float other);
		float Size() const;
		FRotator Clamp() const;
	};

	/**
	 * ScriptStruct CoreUObject.Vector
	 * Size -> 0x000C
	 */
	struct FVector
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		FVector();
		FVector(float x, float y, float z);
		FVector operator +(const FVector& other) const;
		FVector operator -(const FVector& other) const;
		FVector operator *(float scalar) const;
		FVector operator *(const FVector& other) const;
		FVector operator /(float scalar) const;
		FVector operator /(const FVector& other) const;
		FVector& operator =(const FVector& other);
		FVector& operator +=(const FVector& other);
		FVector& operator -=(const FVector& other);
		FVector& operator *=(const float other);
		bool IsValid();
		void Normalize360(FVector& angle);
		float Dot(const FVector& b) const;
		float MagnitudeSqr() const;
		float Magnitude() const;
		FVector Unit() const;
		FRotator ToRotator() const;
		float Distance(const FVector& v) const;
		float DistanceMeter(FVector& v) const;
		friend bool operator ==(const FVector& first, const FVector& second)
		{
			return first.X == second.X && first.Y == second.Y && first.Z == second.Z;
		}

		friend bool operator !=(const FVector& first, const FVector& second)
		{
			return !(first == second);
		}

	};

	/**
	 * ScriptStruct CoreUObject.Vector4
	 * Size -> 0x0010
	 */
	struct FVector4
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Vector2D
	 * Size -> 0x0008
	 */
	struct FVector2D
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		FVector2D();
		FVector2D(float x, float y);
		bool IsValid();
		float Distance(FVector2D& v) const;
		FVector2D operator +(const FVector2D& other) const;
		FVector2D operator -(const FVector2D& other) const;
		FVector2D operator *(float scalar) const;
		FVector2D operator *(const FVector2D& other) const;
		FVector2D operator /(float scalar) const;
		FVector2D operator /(const FVector2D& other) const;
		FVector2D& operator =(const FVector2D& other);
		FVector2D& operator +=(const FVector2D& other);
		FVector2D& operator -=(const FVector2D& other);
		FVector2D& operator *=(const float other);
	};

	/**
	 * ScriptStruct CoreUObject.TwoVectors
	 * Size -> 0x0018
	 */
	struct FTwoVectors
	{
	public:
		struct FVector                                             v1;                                                      // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             v2;                                                      // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Plane
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FPlane : public FVector
	{
	public:
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Quat
	 * Size -> 0x0010
	 */
	struct FQuat
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.PackedNormal
	 * Size -> 0x0004
	 */
	struct FPackedNormal
	{
	public:
		unsigned char                                              X;                                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Y;                                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Z;                                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              W;                                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.IntPoint
	 * Size -> 0x0008
	 */
	struct FIntPoint
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.IntVector
	 * Size -> 0x000C
	 */
	struct FIntVector
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Color
	 * Size -> 0x0004
	 */
	struct FColor
	{
	public:
		unsigned char                                              B;                                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              G;                                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              R;                                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              A;                                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.LinearColor
	 * Size -> 0x0010
	 */
	struct FLinearColor
	{
	public:
		float                                                      R;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      G;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      B;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      A;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		FLinearColor();
		FLinearColor(float r, float g, float b, float a);
	};

	/**
	 * ScriptStruct CoreUObject.Box
	 * Size -> 0x001C
	 */
	struct FBox
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             Max;                                                     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              IsValid;                                                 // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7RDJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Box2D
	 * Size -> 0x0014
	 */
	struct FBox2D
	{
	public:
		struct FVector2D                                           Min;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector2D                                           Max;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              IsValid;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SEDA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.BoxSphereBounds
	 * Size -> 0x001C
	 */
	struct FBoxSphereBounds
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             BoxExtent;                                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      SphereRadius;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.OrientedBox
	 * Size -> 0x003C
	 */
	struct FOrientedBox
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             AxisX;                                                   // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             AxisY;                                                   // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             AxisZ;                                                   // 0x0024(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		float                                                      ExtentX;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtentY;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtentZ;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Matrix
	 * Size -> 0x0040
	 */
	struct FMatrix
	{
	public:
		struct FPlane                                              XPlane;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FPlane                                              YPlane;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FPlane                                              ZPlane;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		struct FPlane                                              WPlane;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor

	public:
		FMatrix operator *(const FMatrix& other) const;
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointFloat
	 * Size -> 0x0014
	 */
	struct FInterpCurvePointFloat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OutVal;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArriveTangent;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      LeaveTangent;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EInterpCurveMode                                           InterpMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_7U29[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveFloat
	 * Size -> 0x0018
	 */
	struct FInterpCurveFloat
	{
	public:
		TArray<struct FInterpCurvePointFloat>                      Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_D8X8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointVector2D
	 * Size -> 0x0020
	 */
	struct FInterpCurvePointVector2D
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           OutVal;                                                  // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           ArriveTangent;                                           // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		struct FVector2D                                           LeaveTangent;                                            // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		EInterpCurveMode                                           InterpMode;                                              // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_MBUI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveVector2D
	 * Size -> 0x0018
	 */
	struct FInterpCurveVector2D
	{
	public:
		TArray<struct FInterpCurvePointVector2D>                   Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TPU0[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointVector
	 * Size -> 0x002C
	 */
	struct FInterpCurvePointVector
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OutVal;                                                  // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ArriveTangent;                                           // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LeaveTangent;                                            // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6DSG[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveVector
	 * Size -> 0x0018
	 */
	struct FInterpCurveVector
	{
	public:
		TArray<struct FInterpCurvePointVector>                     Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LCTL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointQuat
	 * Size -> 0x0050
	 */
	struct FInterpCurvePointQuat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9S0C[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               OutVal;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FQuat                                               ArriveTangent;                                           // 0x0020(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FQuat                                               LeaveTangent;                                            // 0x0030(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_STU5[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveQuat
	 * Size -> 0x0018
	 */
	struct FInterpCurveQuat
	{
	public:
		TArray<struct FInterpCurvePointQuat>                       Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X50L[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	 * Size -> 0x0050
	 */
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTwoVectors                                         OutVal;                                                  // 0x0004(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTwoVectors                                         ArriveTangent;                                           // 0x001C(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FTwoVectors                                         LeaveTangent;                                            // 0x0034(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YUVI[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveTwoVectors
	 * Size -> 0x0018
	 */
	struct FInterpCurveTwoVectors
	{
	public:
		TArray<struct FInterpCurvePointTwoVectors>                 Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K9B9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointLinearColor
	 * Size -> 0x0038
	 */
	struct FInterpCurvePointLinearColor
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OutVal;                                                  // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ArriveTangent;                                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LeaveTangent;                                            // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EInterpCurveMode                                           InterpMode;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X9J3[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveLinearColor
	 * Size -> 0x0018
	 */
	struct FInterpCurveLinearColor
	{
	public:
		TArray<struct FInterpCurvePointLinearColor>                Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Z4V[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Transform
	 * Size -> 0x0030
	 */
	struct FTransform
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor
		struct FVector                                             Translation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NJIX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4I07[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		FMatrix ToMatrixWithScale() const;
	};

	/**
	 * ScriptStruct CoreUObject.RandomStream
	 * Size -> 0x0008
	 */
	struct FRandomStream
	{
	public:
		int32_t                                                    InitialSeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Seed;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.DateTime
	 * Size -> 0x0008
	 */
	struct FDateTime
	{
	public:
		unsigned char                                              UnknownData_JKF9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Timespan
	 * Size -> 0x0008
	 */
	struct FTimespan
	{
	public:
		unsigned char                                              UnknownData_PA6D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.StringAssetReference
	 * Size -> 0x0010
	 */
	struct FStringAssetReference
	{
	public:
		class FString                                              AssetLongPathname;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.StringClassReference
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FStringClassReference : public FStringAssetReference
	{	};

	/**
	 * ScriptStruct CoreUObject.FallbackStruct
	 * Size -> 0x0001
	 */
	struct FFallbackStruct
	{
	public:
		unsigned char                                              UnknownData_34DU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.FloatRangeBound
	 * Size -> 0x0008
	 */
	struct FFloatRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HJMK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.FloatRange
	 * Size -> 0x0010
	 */
	struct FFloatRange
	{
	public:
		struct FFloatRangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.Int32RangeBound
	 * Size -> 0x0008
	 */
	struct FInt32RangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_41FR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Int32Range
	 * Size -> 0x0010
	 */
	struct FInt32Range
	{
	public:
		struct FInt32RangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FInt32RangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CoreUObject.FloatInterval
	 * Size -> 0x0008
	 */
	struct FFloatInterval
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CoreUObject.Int32Interval
	 * Size -> 0x0008
	 */
	struct FInt32Interval
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
