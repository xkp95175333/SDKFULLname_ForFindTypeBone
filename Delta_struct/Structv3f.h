	// ScriptStruct CoreUObject.Vector
	// 0x000C (0x000C - 0x0000)
	struct FVector
	{
	public:
		using UnderlayingType = float;

		float                                         X;                                                 // 0x0000(0x0004)
		float                                         Y;                                                 // 0x0004(0x0004)
		float                                         Z;                                                 // 0x0008(0x0004)

	public:
		constexpr FVector(UnderlayingType X = 0, UnderlayingType Y = 0, UnderlayingType Z = 0)
			: X(X), Y(Y), Z(Z)
		{
		}
		constexpr FVector(const FVector& other)
			: X(other.X), Y(other.Y), Z(other.Z)
		{
		}
		FVector& Normalize()
		{
			*this /= Magnitude();

			return *this;
		}
		FVector& operator*=(UnderlayingType Scalar)
		{
			*this = *this * Scalar;

			return *this;
		}
		FVector& operator*=(const FVector& Other)
		{
			*this = *this * Other;

			return *this;
		}
		FVector& operator+=(const FVector& Other)
		{
			*this = *this + Other;

			return *this;
		}
		FVector& operator-=(const FVector& Other)
		{
			*this = *this - Other;

			return *this;
		}
		FVector& operator/=(UnderlayingType Scalar)
		{
			*this = *this / Scalar;

			return *this;
		}
		FVector& operator/=(const FVector& Other)
		{
			*this = *this / Other;

			return *this;
		}
		FVector& operator=(const FVector& other)
		{
			X = other.X;
			Y = other.Y;
			Z = other.Z;

			return *this;
		}

		UnderlayingType Dot(const FVector& Other) const
		{
			return (X * Other.X) + (Y * Other.Y) + (Z * Other.Z);
		}
		UnderlayingType GetDistanceTo(const FVector& Other) const
		{
			FVector DiffVector = Other - *this;

			return DiffVector.Magnitude();
		}
		UnderlayingType GetDistanceToInMeters(const FVector& Other) const
		{
			return GetDistanceTo(Other) * static_cast<UnderlayingType>(0.01);
		}
		FVector GetNormalized() const
		{
			return *this / Magnitude();
		}
		bool IsZero() const
		{
			return X == 0 && Y == 0 && Z == 0;
		}
		UnderlayingType Magnitude() const
		{
			return std::sqrt((X * X) + (Y * Y) + (Z * Z));
		}
		bool operator!=(const FVector& Other) const
		{
			return X != Other.X || Y != Other.Y || Z != Other.Z;
		}
		FVector operator*(UnderlayingType Scalar) const
		{
			return { X * Scalar, Y * Scalar, Z * Scalar };
		}
		FVector operator*(const FVector& Other) const
		{
			return { X * Other.X, Y * Other.Y, Z * Other.Z };
		}
		FVector operator+(const FVector& Other) const
		{
			return { X + Other.X, Y + Other.Y, Z + Other.Z };
		}
		FVector operator-(const FVector& Other) const
		{
			return { X - Other.X, Y - Other.Y, Z - Other.Z };
		}
		FVector operator/(UnderlayingType Scalar) const
		{
			if (Scalar == 0)
				return *this;

			return { X / Scalar, Y / Scalar, Z / Scalar };
		}
		FVector operator/(const FVector& Other) const
		{
			if (Other.X == 0 || Other.Y == 0 || Other.Z == 0)
				return *this;

			return { X / Other.X, Y / Other.Y, Z / Other.Z };
		}
		bool operator==(const FVector& Other) const
		{
			return X == Other.X && Y == Other.Y && Z == Other.Z;
		}
	};
// ScriptStruct CoreUObject.Rotator
// 0x000C (0x000C - 0x0000)
struct FRotator
{
public:
	using UnderlayingType = float;

	float                                         Pitch;                                             // 0x0000(0x0004)
	float                                         Yaw;                                               // 0x0004(0x0004)
	float                                         Roll;                                              // 0x0008(0x0004)

public:
	static UnderlayingType ClampAxis(UnderlayingType Angle)
	{
		Angle = std::fmod(Angle, static_cast<UnderlayingType>(360));
		if (Angle < static_cast<UnderlayingType>(0))
			Angle += static_cast<UnderlayingType>(360);

		return Angle;
	}
	static UnderlayingType NormalizeAxis(UnderlayingType Angle)
	{
		Angle = ClampAxis(Angle);
		if (Angle > static_cast<UnderlayingType>(180))
			Angle -= static_cast<UnderlayingType>(360);

		return Angle;
	}

	FRotator& Clamp()
	{
		Pitch = ClampAxis(Pitch);
		Yaw = ClampAxis(Yaw);
		Roll = ClampAxis(Roll);

		return *this;
	}
	constexpr FRotator(UnderlayingType Pitch = 0, UnderlayingType Yaw = 0, UnderlayingType Roll = 0)
		: Pitch(Pitch), Yaw(Yaw), Roll(Roll)
	{
	}
	constexpr FRotator(const FRotator& other)
		: Pitch(other.Pitch), Yaw(other.Yaw), Roll(other.Roll)
	{
	}
	FRotator& Normalize()
	{
		Pitch = NormalizeAxis(Pitch);
		Yaw = NormalizeAxis(Yaw);
		Roll = NormalizeAxis(Roll);

		return *this;
	}
	FRotator& operator*=(UnderlayingType Scalar)
	{
		*this = *this * Scalar;

		return *this;
	}
	FRotator& operator*=(const FRotator& Other)
	{
		*this = *this * Other;

		return *this;
	}
	FRotator& operator+=(const FRotator& Other)
	{
		*this = *this + Other;

		return *this;
	}
	FRotator& operator-=(const FRotator& Other)
	{
		*this = *this - Other;

		return *this;
	}
	FRotator& operator/=(UnderlayingType Scalar)
	{
		*this = *this / Scalar;

		return *this;
	}
	FRotator& operator/=(const FRotator& Other)
	{
		*this = *this / Other;

		return *this;
	}
	FRotator& operator=(const FRotator& other)
	{
		Pitch = other.Pitch;
		Yaw = other.Yaw;
		Roll = other.Roll;

		return *this;
	}

	FRotator GetNormalized() const
	{
		FRotator rotator = *this;
		rotator.Normalize();

		return rotator;
	}
	bool IsZero() const
	{
		return ClampAxis(Pitch) == 0 && ClampAxis(Yaw) == 0 && ClampAxis(Roll) == 0;
	}
	bool operator!=(const FRotator& Other) const
	{
		return Pitch != Other.Pitch || Yaw != Other.Yaw || Roll != Other.Roll;
	}
	FRotator operator*(UnderlayingType Scalar) const
	{
		return { Pitch * Scalar, Yaw * Scalar, Roll * Scalar };
	}
	FRotator operator*(const FRotator& Other) const
	{
		return { Pitch * Other.Pitch, Yaw * Other.Yaw, Roll * Other.Roll };
	}
	FRotator operator+(const FRotator& Other) const
	{
		return { Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll };
	}
	FRotator operator-(const FRotator& Other) const
	{
		return { Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll };
	}
	FRotator operator/(UnderlayingType Scalar) const
	{
		if (Scalar == 0)
			return *this;

		return { Pitch / Scalar, Yaw / Scalar, Roll / Scalar };
	}
	FRotator operator/(const FRotator& Other) const
	{
		if (Other.Pitch == 0 || Other.Yaw == 0 || Other.Roll == 0)
			return *this;

		return { Pitch / Other.Pitch, Yaw / Other.Yaw, Roll / Other.Roll };
	}
	bool operator==(const FRotator& Other) const
	{
		return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
	}
};



//CoreDEf 
class Vector3
{
public:
	float x, y, z;

	Vector3() : x(0.f), y(0.f), z(0.f) {}
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
	~Vector3() {}

	inline float Dot(const Vector3& v) const
	{
		return x * v.x + y * v.y + z * v.z;
	}

	inline float Distance(const Vector3& v) const
	{
		return sqrtf(powf(v.x - x, 2.0f) + powf(v.y - y, 2.0f) + powf(v.z - z, 2.0f));
	}

	inline Vector3 operator+(const Vector3& v) const
	{
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	inline Vector3 operator-(const Vector3& v) const
	{
		return Vector3(x - v.x, y - v.y, z - v.z);
	}

	inline float Length() const
	{
		return sqrtf((x * x) + (y * y) + (z * z));
	}
};
