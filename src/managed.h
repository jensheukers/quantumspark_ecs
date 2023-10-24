// Written by Jens Heukers
#ifndef MANAGED_H
#define MANAGED_H

#include <vector>

namespace open_entity {
	/// Managed class is the base class for all entities and components.
	/** Managed handles mostly child/parent relations */
	class Managed {
	private:
		Managed* m_parent;
		std::vector<Managed*> m_children; ///List of children
	public:
		void GetChildren(std::vector<Managed*>& pChildren);
		void SetParent(Managed* pParent);

		Managed* GetParent();

		template <typename Type> 
		Type* Cast(Type pFrom) {
				return dynamic_cast<Type*>(pFrom);
		}
	};
};

#endif // !MANAGED_J