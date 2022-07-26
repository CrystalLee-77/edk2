/** @file
  Provides services to create Asf Acpi table.

  Copyright (c) 1985 - 2022, AMI. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef __ASF_ACPI_TABLE_LIB_H__
#define __ASF_ACPI_TABLE_LIB_H__

#include <Uefi.h>

/**
  This function install the ASF acpi Table.

  @param[in]  Event     A pointer to the Event that triggered the callback.
  @param[in]  Context   A pointer to private data registered with the callback function.
**/
VOID
EFIAPI
InstallAsfAcpiTableEvent  (
  IN EFI_EVENT  Event,
  IN VOID       *Context
  );

#endif
