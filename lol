local NotificationUI = Instance.new("ScreenGui")
local NotificationContainer = Instance.new("Frame")
local UIListLayout = Instance.new("UIListLayout")
local Template = Instance.new("TextLabel")
local UITextSizeConstraint = Instance.new("UITextSizeConstraint")

NotificationUI.Name = "NotificationUI"
NotificationUI.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
NotificationUI.ZIndexBehavior = Enum.ZIndexBehavior.Sibling
NotificationUI.ResetOnSpawn = false
NotificationContainer.Name = "NotificationContainer"
NotificationContainer.Parent = NotificationUI
NotificationContainer.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
NotificationContainer.BackgroundTransparency = 1.000
NotificationContainer.Position = UDim2.new(0.418219686, 0, 0.50513351, 0)
NotificationContainer.Size = UDim2.new(0, 314, 0, 450)

UIListLayout.Parent = NotificationContainer
UIListLayout.HorizontalAlignment = Enum.HorizontalAlignment.Center
UIListLayout.SortOrder = Enum.SortOrder.LayoutOrder
UIListLayout.VerticalAlignment = Enum.VerticalAlignment.Bottom
UIListLayout.Padding = UDim.new(0, 3)

Template.Name = "Template"
Template.Parent = NotificationUI
Template.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Template.BackgroundTransparency = 1.000
Template.Position = UDim2.new(0.00636942685, 0, 0.913333356, 0)
Template.Size = UDim2.new(0, 310, 0, 39)
Template.Visible = false
Template.Font = Enum.Font.Gotham
Template.Text = "This is a cool little notification"
Template.TextColor3 = Color3.fromRGB(255, 255, 255)
Template.TextScaled = true
Template.TextSize = 15.000
Template.TextWrapped = true
UITextSizeConstraint.Parent = Template
UITextSizeConstraint.MaxTextSize = 15

local Lib = {}

function Lib:Notify(Text, Duration) 
    local Notification = Template:Clone()
    Notification.Visible = true 
    Notification.Parent = NotificationContainer
    Notification.Text = Text or "No description given"
      
    spawn(function()
        if typeof(Duration) == "number" then
            task.wait(Duration)
            for i = 0,1,0.1 do 
                Notification.TextTransparency = i 
                wait()
            end
            wait(0.05)
            Notification:Destroy()
        end
    end)
end

return Lib 
