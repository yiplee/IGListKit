/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <IGListKit/IGListKit.h>
#import <IGListKit/IGListMacros.h>

IGLK_LINK_REQUIRE(IGListAdapter_DebugDescription)
@interface IGListAdapter (DebugDescription)

- (NSArray<NSString *> *)debugDescriptionLines;

@end
