#include "managed.h"

void open_entity::Managed::GetChildren(std::vector<Managed*>& pChildren) {
	for (size_t i = 0; i < m_children.size(); i++)
		pChildren.push_back(m_children[i]);
}

void open_entity::Managed::SetParent(Managed* pParent) {
	pParent = m_parent;
}

void open_entity::Managed::GetParent(Managed& pParent) { 
	pParent = *m_parent;
}