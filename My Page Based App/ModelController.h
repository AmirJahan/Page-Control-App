//
//  ModelController.h
//  My Page Based App
//
//  Created by Amir on 10/23/17.
//  Copyright © 2017 Cinard Digital Media Institute. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

