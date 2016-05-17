//
//  ToDoCell.h
//  LHL-Every.Do
//
//  Created by Asuka Nakagawa on 2016-05-17.
//  Copyright © 2016 Asuka Nakagawa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoCell : UITableViewCell

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *descripition;
@property (nonatomic) NSUInteger priorityNumber;
@property BOOL completedIndicator;


@end
