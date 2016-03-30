/**
 *  Resource.h
 *
 *  Version: 1.0.0.0
 *  Created on: 04/08/2015
 *  Modified on: **
 *  Author: Heverton Machado Soares (sm.heverton@gmail.com)
 *  Maintainer: Expertinos UNIFEI (expertinos.unifei@gmail.com)
 */

#ifndef RESOURCE_H_
#define RESOURCE_H_

#include <string>
#include "mrta_vc/Resource.h"

namespace br 
{
	namespace edu
	{
		namespace unifei 
		{
			namespace expertinos
			{
				namespace mrta_vc
				{
					namespace tasks
					{
						class Resource 
						{

						public:
							Resource(int id, std::string name, std::string description);
							Resource(const ::mrta_vc::Resource::ConstPtr& resource_msg);
							Resource(::mrta_vc::Resource resource_msg);		
							~Resource();

							int getId();
							std::string getName();
							std::string getDescription();
							void setDescription(std::string description);
							bool equals(Resource resource);
							::mrta_vc::Resource toMsg();
							bool operator==(const Resource& resource);
							bool operator!=(const Resource& resource);

						private:
							int id_;
							std::string name_;
							std::string description_;	
						};
					}
				}
			}
		}
	}
}			
					
#endif /* RESOURCE_H_ */
