//
//  AppDelegate.h
//  TestBackgroundTask
//
//  Created by Pan Peter on 13/7/18.
//  Copyright (c) 2013年 Pan Peter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (assign, nonatomic) UIBackgroundTaskIdentifier backgroundTaskIdentifier;
@property (strong, nonatomic) NSTimer *myTimer;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
