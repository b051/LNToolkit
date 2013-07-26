//
//  LNImageView.h
//  Threadflip
//
//  Created by Rex Sheng on 6/28/13.
//  Copyright (c) 2013 Threadflip. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"

/** UIImageView which will fade in network supplied images */
@interface LNImageView : UIImageView

@property (nonatomic, weak, readonly) UIImage *networkImage;

@end
