//
//  AppDelegate.h
//  GroupPhotos
//
//  Created by kjh on 2018/3/22.
//  Copyright © 2018年 kjh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

