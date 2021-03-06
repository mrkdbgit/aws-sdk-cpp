﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AssociationStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the state of a target network association.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociationStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AssociationStatus
  {
  public:
    AssociationStatus();
    AssociationStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AssociationStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the target network association.</p>
     */
    inline const AssociationStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>The state of the target network association.</p>
     */
    inline void SetCode(const AssociationStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state of the target network association.</p>
     */
    inline void SetCode(AssociationStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state of the target network association.</p>
     */
    inline AssociationStatus& WithCode(const AssociationStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state of the target network association.</p>
     */
    inline AssociationStatus& WithCode(AssociationStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline AssociationStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline AssociationStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the status of the target network association, if
     * applicable.</p>
     */
    inline AssociationStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    AssociationStatusCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
