//
//  CustomView.h
//  PartTwo
//
//  Created by Daniel Distant on 9/18/15.
//  Copyright © 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomViewDelegate.h"

@interface CustomView : UIView

@property (nonatomic, weak) id <CustomViewDelegate> delegate;

@end
