#include "Collider.h"


namespace GameDev2D
{
    namespace Physics
    {
        Collider::Collider() :
            m_Angle(0.0f)
        {

        }

        Collider::~Collider()
        {

        }

        void Collider::SetAngle(float aAngleInRadians)
        {
            m_Angle = aAngleInRadians;
        }

        float Collider::GetAngle()
        {
            return m_Angle;
        }
		void Collider::SetBody(Body* body)
		{
			m_body = body;
		}
		Body* Collider::GetBody()
		{
			return m_body;
		}
    }
}