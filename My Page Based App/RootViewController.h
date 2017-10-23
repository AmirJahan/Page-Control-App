//
//  RootViewController.h
//  My Page Based App
//
//  Created by Amir on 10/23/17.
//  Copyright © 2017 Cinard Digital Media Institute. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end

