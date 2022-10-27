#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Enum ModelingOperators.ECSGOperation
	 */
	enum class ECSGOperation : uint8_t
	{
		DifferenceAB = 0,
		DifferenceBA = 1,
		Intersect    = 2,
		Union        = 3,
		TrimA        = 4,
		TrimB        = 5,
		MAX          = 6
	};

	/**
	 * Enum ModelingOperators.ESplitNormalMethod
	 */
	enum class ESplitNormalMethod : uint8_t
	{
		UseExistingTopology = 0,
		FaceNormalThreshold = 1,
		FaceGroupID         = 2,
		PerTriangle         = 3,
		PerVertex           = 4,
		MAX                 = 5
	};

	/**
	 * Enum ModelingOperators.ENormalCalculationMethod
	 */
	enum class ENormalCalculationMethod : uint8_t
	{
		AreaWeighted       = 0,
		AngleWeighted      = 1,
		AreaAngleWeighting = 2,
		MAX                = 3
	};

	/**
	 * Enum ModelingOperators.EHoleFillOpFillType
	 */
	enum class EHoleFillOpFillType : uint8_t
	{
		TriangleFan        = 0,
		PolygonEarClipping = 1,
		Planar             = 2,
		Minimal            = 3,
		Smooth             = 4,
		MAX                = 5
	};

	/**
	 * Enum ModelingOperators.ERemeshSmoothingType
	 */
	enum class ERemeshSmoothingType : uint8_t
	{
		Uniform   = 0,
		Cotangent = 1,
		MeanValue = 2,
		MAX       = 3
	};

	/**
	 * Enum ModelingOperators.ERemeshType
	 */
	enum class ERemeshType : uint8_t
	{
		Standard   = 0,
		FullPass   = 1,
		NormalFlow = 2,
		MAX        = 3
	};

	/**
	 * Enum ModelingOperators.EUVProjectionMethod
	 */
	enum class EUVProjectionMethod : uint8_t
	{
		Cube     = 0,
		Cylinder = 1,
		Plane    = 2,
		MAX      = 3
	};

	/**
	 * Enum ModelingOperators.EMorphologyOperation
	 */
	enum class EMorphologyOperation : uint8_t
	{
		Dilate   = 0,
		Contract = 1,
		Close    = 2,
		Open     = 3,
		MAX      = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
